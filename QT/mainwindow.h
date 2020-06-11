#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#pragma once
#include <QMainWindow>
#include"study.h"
#include"review.h"
#include"daka.h"
#include<QStackedWidget>
#include"login.h"
#include "select.h"
#include<QString>
#include <QDebug>
#include "va.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_5_clicked();
    void get_sel(QString strr);

    void on_pushButton_6_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::MainWindow *ui;
    void on_pushButton_clicked();
    void on_pushButton_2clicked();
    void on_pushButton_3clicked();
    QString sele;
};

#endif // MAINWINDOW_H
