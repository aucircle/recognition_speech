#ifndef REVIEW_H
#define REVIEW_H
#pragma once
#include <QMainWindow>
#include"study.h"
#include"daka.h"
namespace Ui {
class review;
}

class review : public QMainWindow
{
    Q_OBJECT

public:
    explicit review(QWidget *parent = 0);
    ~review();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_10_clicked();

private:
    Ui::review *ui;
    int x=0;
    void on_pushButton_clicked();
    void on_pushButton_2clicked();
    void on_pushButton_3clicked();
};

#endif // REVIEW_H
