#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QPalette>
#include<QDebug>
#include<QMessageBox>
#include<QString>
#include "login.h"
MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent),  ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    resize(800,600);
 connect(ui->pushButton,&QAbstractButton::clicked,this,&MainWindow::on_pushButton_clicked);
 connect(ui->pushButton_2,&QAbstractButton::clicked,this,&MainWindow::on_pushButton_2clicked);
   connect(ui->pushButton_3,&QAbstractButton::clicked,this,&MainWindow::on_pushButton_3clicked);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    study *st=new study(this);
     st->show();
     this->hide();
}
void MainWindow::on_pushButton_2clicked()
{  review *re=new review(this);
    re->show();
    this->hide();
}
void MainWindow::on_pushButton_3clicked()
{daka *da=new daka(this);
    da->show();
    this->hide();
}


void MainWindow::on_pushButton_5_clicked()
{
    select *se=new select(this);
    se->show();
    this->hide();
}

void MainWindow::get_sel(QString strr)
{
  MainWindow::sele=strr;
  qDebug()<<sele;
  ui->lineEdit->setText(sele);
}

void MainWindow::on_pushButton_6_clicked()
{
    va *v=new va(this);
    v->show();
    this->hide();
}

void MainWindow::on_pushButton_4_clicked()
{
    Dialog *da=new Dialog(this);
    da->show();
    this->hide();
}
