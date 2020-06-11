#ifndef LOGIN_H
#define LOGIN_H
#pragma once
#include <QDialog>
#include"mainwindow.h"
#include"registered.h"
#include <QString>
#include"daka.h"
namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();
      static QString c;
signals:
      send_name(QString);
private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
private:
    Ui::Dialog *ui;
};

#endif // LOGIN_H
