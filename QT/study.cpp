#include "study.h"
#include "ui_study.h"
#include<QFileDialog>
#include<QSound>
#include<QtSql>
#include "mainwindow.h"
study::study(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::study)
{
    ui->setupUi(this);
     resize(800,600);
  //     connect(ui->pushButton_3,&QAbstractButton::clicked,this,&study::nextone);
 //      connect(ui->pushButton,&QAbstractButton::clicked,this,&study::lastone);
       ui->textEditDevice->setPlainText("six");
       ui->lineEdit->setText("六");
       connect(ui->pushButton_4,&QAbstractButton::clicked,this,&study::bofangluyin);
}
study::~study()
{
    delete ui;
}


void study::bofangluyin()
{

    switch(x)
 { case   0: QSound::play(":/resource root/six.wav");break;
  case   1: QSound::play(":/resource root/zero.wav");break;
  case   2: QSound::play(":/resource root/one.wav");break;
  case   3: QSound::play(":/resource root/two.wav");break;
  case   4: QSound::play(":/resource root/three.wav");break;
  case   5: QSound::play(":/resource root/four.wav");break;
  case   6: QSound::play(":/resource root/five.wav");break;
}


}


/*void study::lastone()
{//初级版本，不用数据库
 //   if(x==0) { ui->textEditDevice->setPlainText("five");x=6;}
//   else    if(x==1) { ui->textEditDevice->setPlainText("six");x=0;}
 // else     if(x==2) { ui->textEditDevice->setPlainText("zero");x=1;}
 //  else    if(x==3) { ui->textEditDevice->setPlainText("one");x=2;}
 //  else    if(x==4) { ui->textEditDevice->setPlainText("two");x=3;}
 //  else    if(x==5) { ui->textEditDevice->setPlainText("three");x=4;}
 //  else    { ui->textEditDevice->setPlainText("four");x=5;}


//高级版本，使用数据库
    if(x<6) x=x+1;else x=0;
      QString S =QString("select mywords,chi from myword where num='%1'").arg(QString::number(x));
                  QSqlQuery query;
                query.exec(S);
                if(query.first())
      {      QString wordd=query.value(0).toString();
             QString chii=query.value("chi").toString();
                    ui->textEditDevice->setPlainText(wordd);
                    ui->lineEdit->setText(chii);}
}
*/

//void study::nextone()
//{
//    //初级版本，不用数据库
// //   if(x==0) { ui->textEditDevice->setPlainText("zero");x=1;}
// //  else if(x==1) { ui->textEditDevice->setPlainText("one");x=2;}
// // else  if(x==2) { ui->textEditDevice->setPlainText("two");x=3;}
// //  else  if(x==3) { ui->textEditDevice->setPlainText("three");x=4;}
// // else  if(x==4) { ui->textEditDevice->setPlainText("four");x=5;}
// //  else  if(x==5) { ui->textEditDevice->setPlainText("five");x=6;}
// //  else  { ui->textEditDevice->setPlainText("six");x=0;}


// //高级版本，使用数据库
//  if(x<6) x=x+1;else x=0;
//    QString S =QString("select mywords,chi from myword where num='%1'").arg(QString::number(x));
//                QSqlQuery query;
//              query.exec(S);
//              if(query.first())
//    {      QString wordd=query.value(0).toString();
//           QString chii=query.value("chi").toString();
//                  ui->textEditDevice->setPlainText(wordd);
//                  ui->lineEdit->setText(chii);}
//}

void study::on_pushButton_1_clicked()
{
    review *re=new review(this);
       re->show();
       this->hide();
}

void study::on_pushButton_2_clicked()
{
    daka *da=new daka(this);
        da->show();
        this->hide();
}


void study::on_pushButton_clicked()
{
    if(x<6) x=x+1;else x=0;
      QString S =QString("select mywords,chi from myword where num='%1'").arg(QString::number(x));
                  QSqlQuery query;
                query.exec(S);
                if(query.first())
      {      QString wordd=query.value(0).toString();
             QString chii=query.value("chi").toString();
                    ui->textEditDevice->setPlainText(wordd);
                    ui->lineEdit->setText(chii);}
                QString P=" ";
     if((x-1)<0) P =QString("update myword set familiar='陌生' where num='%1'").arg(QString::number(6));
     else P =QString("update myword set familiar='陌生' where num='%1'").arg(QString::number(x-1));
      QSqlQuery quer;
      quer.exec(P);
      qDebug()<<P;
      qDebug()<<quer.exec(P);
}


void study::on_pushButton_3_clicked()
{
    if(x<6) x=x+1;else x=0;
      QString S =QString("select mywords,chi from myword where num='%1'").arg(QString::number(x));
                  QSqlQuery query;
                query.exec(S);
                if(query.first())
      {      QString wordd=query.value(0).toString();
             QString chii=query.value("chi").toString();
                    ui->textEditDevice->setPlainText(wordd);
                    ui->lineEdit->setText(chii);}
                QString P=" ";
     if((x-1)<0) P =QString("update myword set familiar='熟悉' where num='%1'").arg(QString::number(6));
     else P =QString("update myword set familiar='熟悉' where num='%1'").arg(QString::number(x-1));
                QSqlQuery quer;
                quer.exec(P);
}

void study::on_pushButton_5_clicked()
{
    MainWindow *mw=new MainWindow(this);
    mw->show();
    this->hide();
}
