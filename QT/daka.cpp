#include "daka.h"
#include "ui_daka.h"
#include<QDateTime>
#include"login.h"
#include<QDebug>
#include<QMessageBox>
#include<QTime>
#include<QtSql>
daka::daka(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::daka)
{ strrr="";
    x=0;
dakatianshu=0;
    ui->setupUi(this);
     resize(800,600);
     connect(ui->pushButton,&QAbstractButton::clicked,this,&daka::on_pushButton_clicked);
     connect(ui->pushButton_2,&QAbstractButton::clicked,this,&daka::on_pushButton_2clicked);
     QString S ="select dakatianshu from demo2.daka where userid='1'";//+strrr;
        QSqlQuery query;
        qDebug()<<(query.exec(S));

         QDateTime curDateTime=QDateTime::currentDateTime();
        daka::datetime=QDateTime::fromString(Dialog::c,"yyyy-MM-dd hh:mm:ss");
                  qDebug()<<curDateTime;
               daka::dakatime=QDateTime::fromMSecsSinceEpoch(QDateTime::currentDateTime().toMSecsSinceEpoch() - datetime.toMSecsSinceEpoch()).toUTC().toString("hh:mm:ss");
            qDebug()<<"span"<<dakatime;
 ui->lineEdit_3->setText(dakatime);
}

daka::~daka()
{
    delete ui;
}


void daka::on_pushButton_clicked()
{
    study *st=new study(this);
     st->show();
     this->hide();
}
void daka::on_pushButton_2clicked()
{  review *re=new review(this);
    re->show();
    this->hide();
}



void daka::get_userid(QString  strr)
{
    daka::strrr=strr;
    qDebug()<<daka::strrr;
    QString S ="select dakatianshu from demo2.daka where userid="+strrr;
       QSqlQuery query;
       query.exec(S);
//      QString S1 ="select user from demo2.userinf where user="+s1;
//                   qDebug()<<query.next();
//                 query.exec(S1);
       qDebug()<<(query.exec(S));
//           qDebug()<<query.next();
     if(query.first())
     {//
         QString ws =query.value("dakatianshu").toString();
         qDebug()<<ws;
         dakatianshu=ws.toInt();
         ui->lineEdit->setText(ws);
          qDebug()<<dakatianshu;
                }
}
void daka::on_pushButton_3_clicked()
{qDebug()<<dakatianshu;
     int c=daka::datetime.toTime_t();
  //  qDebug()<<c;
    int b=QDateTime::currentDateTime().toTime_t();
 //  qDebug()<<b;
 //   qDebug()<<b-c;
    int d=b-c;
    if(d>15){//900秒，15分钟
    if(x==0)
    {x=1;
dakatianshu=dakatianshu+1;
QString ws = QString::number(dakatianshu);
ui->lineEdit->setText(ws);
qDebug()<<ws;
QString s1 =QString("update daka set dakatianshu="+ws+" where userid='1' ");//.arg(str);
QSqlQuery query;
query.exec(s1);
 QMessageBox::information(this,tr("Success"),tr("打卡成功!"),QMessageBox::Yes);
    }
    else{ QMessageBox::information(this,tr("Success"),tr("今日已打卡成功，请明日再来!"),QMessageBox::Yes);
    }
}else
       QMessageBox::warning(this,tr("Warning"),tr("学习时长不够!"),QMessageBox::Yes);
}

void daka::on_pushButton_6_clicked()
{        MainWindow *mw=new MainWindow(this);
         mw->show();
         this->hide();
}

void daka::on_pushButton_4_clicked()//刷新
{
    qDebug()<<dakatianshu<<strrr;
    QString S ="select dakatianshu from demo2.daka where userid"+strrr;
       QSqlQuery query;
       query.exec(S);
//      QString S1 ="select user from demo2.userinf where user="+s1;
//                   qDebug()<<query.next();
//                 query.exec(S1);
       qDebug()<<(query.exec(S));
//           qDebug()<<query.next();
     if(query.first())
     {//
         QString ws =query.value("dakatianshu").toString();
         qDebug()<<ws;
         dakatianshu=ws.toInt();
         ui->lineEdit->setText(ws);
          qDebug()<<dakatianshu;
                }
     QDateTime curDateTime=QDateTime::currentDateTime();
            daka::datetime=QDateTime::fromString(Dialog::c,"yyyy-MM-dd hh:mm:ss");
         //     qDebug()<<curDateTime;
           daka::dakatime=QDateTime::fromMSecsSinceEpoch(QDateTime::currentDateTime().toMSecsSinceEpoch() - datetime.toMSecsSinceEpoch()).toUTC().toString("hh:mm:ss");
        qDebug()<<"span"<<dakatime;
 ui->lineEdit_3->setText(dakatime);

    }



void daka::on_pushButton_5_clicked()
{
    Dialog *lo=new Dialog(this);
    lo->show();
    this->hide();
}
