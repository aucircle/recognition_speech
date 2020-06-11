#include "registered.h"
#include "ui_registered.h"
#include<QMessageBox>
#include<QtSql>
registered::registered(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registered)
{
    ui->setupUi(this);
}

registered::~registered()
{
    delete ui;
}

void registered::on_pushButton_clicked()
{
    Dialog *lo=new Dialog(this);
    lo->show();
    this->hide();
}

void registered::on_pushButton_2_clicked()
{   QString user;
    QString pwd;
    user = ui->lineEdit->text();//获取用户名
    pwd = ui->lineEdit_2->text();//获取密码
    if(user == "")
        QMessageBox::warning(this,"","用户名不能为空！");
    else if(pwd == "")
        QMessageBox::warning(this,"","密码不能为空！");
    else
    { QString S =QString("select user from demo2.userinf where user='%1'").arg(user);
       QSqlQuery query;
      query.exec(S);
      if(query.first())  QMessageBox::warning(this,tr("Error"),tr("此用户名已存在!"),QMessageBox::Yes);
         else  {
//QString s2=QString("insert into userinf values('%1','%2’) ").arg(user).arg(pwd);
QString s2=QString("insert into userinf(user,pwd) values("+user+','+pwd+')');
query.exec(s2);
QMessageBox::information(this,tr("success"),tr("注册成功!"),QMessageBox::Ok);
}
}
}
