#ifndef DAKA_H
#define DAKA_H
#pragma once
#include <QMainWindow>
#include"study.h"
#include"review.h"
#include"login.h"
#include<QDateTime>
#include<QString>
namespace Ui {
class daka;
}

class daka : public QMainWindow
{
    Q_OBJECT

public:
    explicit daka(QWidget *parent = 0);
    ~daka();

private slots:
    void get_userid(QString strr);
    void on_pushButton_3_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_4_clicked();


    void on_pushButton_5_clicked();

private:
    Ui::daka *ui;
    QString dakatime;
    QDateTime datetime;
      int dakatianshu;
   QString strrr;
         int x;
    void on_pushButton_clicked();
    void on_pushButton_2clicked();
    void on_pushButton_3clicked();
};

#endif // DAKA_H
