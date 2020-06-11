#ifndef SELECT_H
#define SELECT_H

#include <QDialog>
#include "mainwindow.h"
namespace Ui {
class select;
}

class select : public QDialog
{
    Q_OBJECT

public:
    explicit select(QWidget *parent = 0);
    ~select();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

signals:
      send_sel(QString);

private:
    Ui::select *ui;
    QString sel;
};

#endif // SELECT_H
