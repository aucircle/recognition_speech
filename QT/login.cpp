#include "login.h"
#include "ui_login.h"
#include<QMessageBox>
#include<QDateTime>
#include<QDebug>
#include<QtSql>
QDateTime curDateTime=QDateTime::currentDateTime();
QString Dialog::c=curDateTime.toString ("yyyy-MM-dd hh:mm:ss");

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
   // QDateTime curDateTime=QDateTime::currentDateTime();
//QString str=curDateTime.toString ("yyyy-MM-dd hh:mm:ss");
//emit  sendData(str);
qDebug()<<c;
        QString user;
        QString pwd;
        user = ui->lineEdit->text();//获取用户名
        pwd = ui->lineEdit_2->text();//获取密码
        if(user == "")
            QMessageBox::warning(this,"","用户名不能为空！");
        else if(pwd == "")
            QMessageBox::warning(this,"","密码不能为空！");
        else
        { QString S =QString("select user,pwd from demo2.userinf where user='%1' and pwd='%2' ").arg(user).arg(pwd);
            QSqlQuery query;
          query.exec(S);
           qDebug()<<S;
          if(query.first())
{            QString id_temp = query.value("user").toString();
            QString password_temp = query.value("pwd").toString();
            qDebug()<<id_temp<<password_temp;
            if(id_temp==user&&password_temp==pwd)
                { MainWindow *mw=new MainWindow(this);
                 mw->show();
                 this->hide();
                 daka *da=new daka(this);
                 connect(this, SIGNAL(send_name(QString)), da, SLOT(get_userid(QString))); //传递用户名给子窗口
                             emit send_name(user);
             }}
             else   QMessageBox::warning(this,tr("Error"),tr("用户名或密码错误!"),QMessageBox::Yes);
}
}

void Dialog::on_pushButton_2_clicked()
{
registered *regi=new registered(this);
        regi->show();
        this->hide();

}
