 #include "review.h"
#include "ui_review.h"
#include<QMessageBox>
#include <QCoreApplication>
#include <QAudioEncoderSettings>
#include <QUrl>
#include <QAudioRecorder>
#include <QTimer>
#include <QEventLoop>
#include <QDebug>
#include<QSound>
#include<QString>
#include<QFile>
#include<QtSql>
#include "mainwindow.h"
review::review(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::review)
{
    ui->setupUi(this);
     resize(800,600);
     connect(ui->pushButton,&QAbstractButton::clicked,this,&review::on_pushButton_clicked);
       connect(ui->pushButton_2,&QAbstractButton::clicked,this,&review::on_pushButton_3clicked);
}

review::~review()
{
    delete ui;
}
void review::on_pushButton_clicked()
{
    study *st=new study(this);
     st->show();
     this->hide();
}

void review::on_pushButton_3clicked()
{daka *da=new daka(this);
    da->show();
    this->hide();
}

void review::on_pushButton_3_clicked()
{
        QCoreApplication a();
        QAudioRecorder *audioRecorder = new QAudioRecorder;/*
        QString  s1="D:\\qtdemo\\demo2\\mysound";
        QString str=ui->textEditDevice->toPlainText();
        QString  s3=s1+str+".wav";*/
        audioRecorder->setOutputLocation(QUrl::fromLocalFile("D:\\qtdemo\\demo2\\mysound.wav"));

        QStringList audioInputList = audioRecorder->audioInputs(); //audioInputList[0]为麦克风
        QStringList audioCodecsList = audioRecorder->supportedAudioCodecs();      //audioCodecsList[0]为 audio/pcm

        audioRecorder->setAudioInput(audioInputList[0]);
        QAudioEncoderSettings settings;
        settings.setCodec(audioCodecsList[0]);
        settings.setSampleRate(16000);  //采样率   XXXXXXX
        settings.setBitRate(256000);
        settings.setQuality(QMultimedia::EncodingQuality(10));
        settings.setEncodingMode(QMultimedia::ConstantBitRateEncoding);
        audioRecorder->setEncodingSettings(settings, QVideoEncoderSettings());
        audioRecorder->record();

        qDebug() << "start!";
        QEventLoop loop;
        QTimer::singleShot( 1000, &loop, SLOT(quit()));
        loop.exec();

        audioRecorder->stop();

        delete audioRecorder;

        qDebug() << "over";
         QMessageBox::information(this,tr("Success"),tr("录音成功!"),QMessageBox::Yes);
}

void review::on_pushButton_8_clicked()
{
     QSound::play("D:\\qtdemo\\demo2\\mysound.wav");
}

void review::on_pushButton_5_clicked()
{
    int m=0;
    int num=0;
    QString P;
    P =QString("update myword set familiar='陌生' where num='%1'").arg(QString::number(x));
    QSqlQuery quer;
    quer.exec(P);
    if(x<6) x=x+1;else x=0;
    QString Q=QString("select familiar from myword where num='%1'").arg(QString::number(x));
    QSqlQuery qu;
    qu.exec(Q);
    QString qe;
     if(qu.first())
    {qe=qu.value("familiar").toString();}
    while((qe =="熟悉")&(num<7))
    {   if(x<6) x=x+1;else x=0;
        QString Q=QString("select familiar from myword where num='%1'").arg(QString::number(x));
        QSqlQuery qu;
        qu.exec(Q);
        if(qu.first())
       {qe=qu.value("familiar").toString();}
        num =num+1;
    }
    if(num==7)
    {
        x=0;
        m=1;
        QMessageBox::warning(this,tr("Error"),tr("复习本为空！"),QMessageBox::Yes);
        MainWindow *mw=new MainWindow(this);
        mw->show();
        this->hide();
        }
     if(m==0)  {
             QString S =QString("select mywords,chi from myword where num='%1'").arg(QString::number(x));
                       QSqlQuery query;
                     query.exec(S);
                     if(query.first())
           {      QString wordd=query.value(0).toString();
                         ui->textEditDevice->setPlainText(wordd);}
     }
}

void review::on_pushButton_6_clicked()
{
    int m=0;
    int num=0;
    QString P;
    P =QString("update myword set familiar='熟悉' where num='%1'").arg(QString::number(x));
    QSqlQuery quer;
    quer.exec(P);
    if(x<6) x=x+1;else x=0;
    QString Q=QString("select familiar from myword where num='%1'").arg(QString::number(x));
    QSqlQuery qu;
    qu.exec(Q);
    QString qe;
     if(qu.first())
    {qe=qu.value("familiar").toString();}
    while((qe =="熟悉")&(num<7))
    {   if(x<6) x=x+1;else x=0;
        QString Q=QString("select familiar from myword where num='%1'").arg(QString::number(x));
        QSqlQuery qu;
        qu.exec(Q);
        if(qu.first())
       {qe=qu.value("familiar").toString();}
        num =num+1;
    }
    if(num==7)
    {
        x=0;
        m=1;
        QMessageBox::warning(this,tr("Error"),tr("复习本为空！"),QMessageBox::Yes);
        MainWindow *mw=new MainWindow(this);
        mw->show();
        this->hide();
        }
     if(m==0)  {
             QString S =QString("select mywords,chi from myword where num='%1'").arg(QString::number(x));
                       QSqlQuery query;
                     query.exec(S);
                     if(query.first())
           {      QString wordd=query.value(0).toString();
                         ui->textEditDevice->setPlainText(wordd);}
     }
}
void review::on_pushButton_9_clicked()
{   QString str=ui->textEditDevice->toPlainText();
    if(str=="six")QSound::play(":/resource root/six.wav");
else if(str== "zero") QSound::play(":/resource root/zero.wav");
    else if(str== "one") QSound::play(":/resource root/one.wav");
    else if(str== "two") QSound::play(":/resource root/two.wav");
    else if(str== "three") QSound::play(":/resource root/three.wav");
    else if(str== "four") QSound::play(":/resource root/four.wav");
    else if(str== "five") QSound::play(":/resource root/five.wav");
     ;

}

void review::on_pushButton_4_clicked()
{
        QFile file("D:\\score.txt");
        QString displayString;
        if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            qDebug()<<"Can't open the file!"<<endl;
        }
        while(!file.atEnd())
        {
            QByteArray line = file.readLine();
            QString str(line);
            qDebug()<< str;
            displayString.append(str);
        }
       ui->plainTextEdit2->setPlainText(displayString);

}

void review::on_pushButton_7_clicked()
{
    MainWindow *mw=new MainWindow(this);
    mw->show();
    this->hide();
}

void review::on_pushButton_10_clicked()
{
    int m=0;
    QString Q=QString("select familiar from myword where num='%1'").arg(QString::number(x));
    QSqlQuery qu;
    qu.exec(Q);
    QString qe;
    if(qu.first())
    qe=qu.value("familiar").toString();
    while((qe =="熟悉")&(x<7))
    {
        x=x+1;
        QString Q=QString("select familiar from myword where num='%1'").arg(QString::number(x));
        QSqlQuery qu;
        qu.exec(Q);
        if(qu.first())
        qe=qu.value("familiar").toString();
    }
   if(x==7) {
        x=0;
        m=1;
        QMessageBox::warning(this,tr("Error"),tr("复习本为空！"),QMessageBox::Yes);
        MainWindow *mw=new MainWindow(this);
        mw->show();
        this->hide();
        }
   if(m==0) {
       QString Q=QString("select mywords from myword where num='%1'").arg(QString::number(x));
       QSqlQuery qu;
       qu.exec(Q);
       QString q;
       if(qu.first())
       q=qu.value("mywords").toString();
       ui->textEditDevice->setPlainText(q);}
}
