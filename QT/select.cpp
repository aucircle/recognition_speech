#include "select.h"
#include "ui_select.h"

select::select(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::select)
{
    ui->setupUi(this);
}

select::~select()
{
    delete ui;
}


void select::on_pushButton_clicked()
{
    sel = "简单词汇";
    MainWindow *mw=new MainWindow(this);
    connect(this, SIGNAL(send_sel(QString)), mw, SLOT(get_sel(QString)));
    emit send_sel(sel);
    mw->show();
    this->hide();
}

void select::on_pushButton_2_clicked()
{
    sel ="四级词汇";
    MainWindow *mw=new MainWindow(this);
    connect(this, SIGNAL(send_sel(QString)), mw, SLOT(get_sel(QString)));
    emit send_sel(sel);
    mw->show();
    this->hide();
}

void select::on_pushButton_3_clicked()
{
    sel ="六级词汇";
    MainWindow *mw=new MainWindow(this);
    connect(this, SIGNAL(send_sel(QString)), mw, SLOT(get_sel(QString)));
    emit send_sel(sel);
    mw->show();
    this->hide();
}


