#ifndef STUDY_H
#define STUDY_H
#pragma once
#include <QMainWindow>
#include"review.h"
#include"daka.h"

namespace Ui {
class study;
}

class study : public QMainWindow
{
    Q_OBJECT

public:
    explicit study(QWidget *parent = 0);
    ~study();

private slots:
    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::study *ui;
    int x=0;
    void bofangluyin();
//    void nextone();
//    void lastone();
};

#endif // STUDY_H
