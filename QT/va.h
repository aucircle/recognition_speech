#ifndef VA_H
#define VA_H

#include <QDialog>
#include "mainwindow.h"
namespace Ui {
class va;
}

class va : public QDialog
{
    Q_OBJECT

public:
    explicit va(QWidget *parent = 0);
    ~va();

private slots:

    void on_pushButton_2_clicked();

private:
    Ui::va *ui;
    int n=0;
};

#endif // VA_H
