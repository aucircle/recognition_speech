#include "mainwindow.h"
#include <QApplication>
#include "login.h"
#include <QSqlDatabase>
#include <QDebug>
#include <QStringList>

int main(int argc, char *argv[])
{   QApplication a(argc, argv);
  //  qDebug()<<"Avaliable drivers;";
  // QStringList drivers = QSqlDatabase::drivers();
  // foreach(QString driver,drivers)
   //    qDebug()<<driver;
QSqlDatabase    db = QSqlDatabase::addDatabase("QMYSQL");  //连接的MYSQL的数据库驱动
   db.setHostName("localhost");         //主机名
   db.setPort(3306);                    //端口
   db.setDatabaseName("demo2");          //数据库名
   db.setUserName("root");              //用户名
   db.setPassword("123");            //密码
   db.open();

   //测试连接

   if(!db.open())
   {
       qDebug()<<"不能连接"<<"connect to mysql error";
   }
   else
   {
        qDebug()<<"连接成功"<<"connect to mysql OK";
   }
  //  db.close();


    Dialog d;
     d.show();

    return a.exec();
}
