import time
from watchdog.observers import Observer
from watchdog.events import PatternMatchingEventHandler
import wave
import numpy as np
from keras.models import load_model

watch_patterns = "*.wav"    # 监控文件的模式
ignore_patterns = ""     # 设置忽略的文件模式
ignore_directories = True      # 是否忽略文件夹变化
case_sensitive = False           # 是否对大小写敏感
event_handler = PatternMatchingEventHandler(watch_patterns, ignore_patterns, ignore_directories, case_sensitive)
watch_path = "D:\\qtdemo\\demo2\\"  # 监控目录
go_recursively = False    # 是否监控子文件夹
def on_created(event):
    print(f"{event.src_path}被创建")

def on_deleted(event):
    print(f"{event.src_path}被删除")

def on_modified(event):
    print(f"{event.src_path} 被修改")
    # 构建模型
    model = load_model('asr_all_model_weights.h5') # 加载训练模型
    wavs=[]
    wavs.append(get_wav_mfcc("D:\\qtdemo\\demo2\\mysound.wav"))
    X=np.array(wavs)
    result=model.predict(X[0:1])[0] 
    ind=0 # 结果中最大的一个数
    for i in range(len(result)):
        if result[i] > result[ind]:
            ind=i;
   # print("识别的语音结果是：",name[ind])
    print("得分是：",round(100*result[ind], 2))
    e = open('D:\\score.txt','w') 
    s1=str(round(100*result[ind]))
    e.write(s1)
    e.close()
    # print("识别结果",result)
#    name = ["zero","one","two","three","four","five","six",] # 创建一个跟训练时一样的标签集
def on_moved(event):
    print(f"{event.src_path}被移动到{event.dest_path}")

event_handler.on_created = on_created
event_handler.on_deleted = on_deleted
event_handler.on_modified = on_modified
event_handler.on_moved = on_moved

watch_path = "D:\\qtdemo\\demo2\\"  # 监控目录
go_recursively = False    # 是否监控子文件夹
my_observer = Observer()
my_observer.schedule(event_handler, watch_path, recursive=go_recursively)

def get_wav_mfcc(wav_path):
    f = wave.open(wav_path,'rb')
    params = f.getparams()
    # print("params:",params)
    nchannels, sampwidth, framerate, nframes = params[:4]
    strData = f.readframes(nframes)#读取音频，字符串格式
    waveData = np.frombuffer(strData,dtype=np.int16)#将字符串转化为int
    waveData = waveData*1.0/(max(abs(waveData)))#wave幅值归一化
    waveData = np.reshape(waveData,[nframes,nchannels]).T
    f.close()
    ### 对音频数据进行长度大小的切割，保证每一个的长度都是一样的【因为训练文件全部是1秒钟长度，16000帧的，所以这里需要把每个语音文件的长度处理成一样的】
    data = list(np.array(waveData[0]))
    # print(len(data))
    while len(data)>16000:
        del data[len(waveData[0])-1]
        del data[0]
    # print(len(data))
    while len(data)<16000:
        data.append(0)
    # print(len(data))
    data=np.array(data)
    # 平方之后，开平方，取正数，值的范围在  0-1  之间
    data = data ** 2
    data = data ** 0.5
    return data


my_observer.start()
try:
    while True:
        time.sleep(5)
except KeyboardInterrupt:
    my_observer.stop()
    my_observer.join()