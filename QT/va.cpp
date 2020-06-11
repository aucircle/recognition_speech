#include "va.h"
#include "ui_va.h"
#include<QtSql>
#include<QFileDialog>
#include<QSound>

va::va(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::va)
{
    ui->setupUi(this);
    for(;n<7;)
    {
    if(n==0)
    {
        QString S =QString("select mywords,chi from myword where num='%1'").arg(QString::number(0));
                    QSqlQuery query;
                    query.exec(S);
                    qDebug()<<S;
                    if(query.first())
          {      QString wordd=query.value("mywords").toString();
                 QString chii=query.value("chi").toString();
                        ui->lineEdit->setText(wordd);
                        ui->lineEdit_8->setText(chii);}
      n=n+1;
    }
    else if(n<7)
    {QString S =QString("select mywords,chi from myword where num='%1'").arg(QString::number(n));
            QSqlQuery query;
            query.exec(S);
            qDebug()<<S;
            if(query.first())
  {      QString wordd=query.value("mywords").toString();
         QString chii=query.value("chi").toString();
         QLineEdit* wo=findChild<QLineEdit*>("lineEdit_"+QString::number(n+1));
         QLineEdit* ch=findChild<QLineEdit*>("lineEdit_"+QString::number(n+8));
         if((wo!=NULL)&(ch!=NULL))
         {wo->setText(wordd);
          ch->setText(chii);}
               }
            n=n+1;
}
    }
}

va::~va()
{
    delete ui;
}


void va::on_pushButton_2_clicked()
{
    MainWindow *mw=new MainWindow(this);
    mw->show();
    this->hide();
}
