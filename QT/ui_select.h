/********************************************************************************
** Form generated from reading UI file 'select.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECT_H
#define UI_SELECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_select
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *select)
    {
        if (select->objectName().isEmpty())
            select->setObjectName(QStringLiteral("select"));
        select->resize(400, 300);
        select->setStyleSheet(QStringLiteral("#select{border-image: url(:/new/prefix1/picture/timgOOEYZ94H.jpg)}"));
        label = new QLabel(select);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 50, 131, 51));
        label->setStyleSheet(QString::fromUtf8("font: 20pt \"\344\273\277\345\256\213\";"));
        label_2 = new QLabel(select);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(80, 130, 131, 41));
        label_2->setStyleSheet(QString::fromUtf8("font: 20pt \"\344\273\277\345\256\213\";"));
        label_3 = new QLabel(select);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(80, 200, 131, 41));
        label_3->setStyleSheet(QString::fromUtf8("font: 20pt \"\344\273\277\345\256\213\";"));
        pushButton = new QPushButton(select);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(260, 60, 93, 41));
        pushButton->setStyleSheet(QString::fromUtf8("font: 20pt \"\344\273\277\345\256\213\";"));
        pushButton_2 = new QPushButton(select);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(260, 127, 93, 41));
        pushButton_2->setStyleSheet(QString::fromUtf8("font: 20pt \"\344\273\277\345\256\213\";"));
        pushButton_3 = new QPushButton(select);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(260, 200, 93, 41));
        pushButton_3->setStyleSheet(QString::fromUtf8("font: 20pt \"\344\273\277\345\256\213\";"));

        retranslateUi(select);

        QMetaObject::connectSlotsByName(select);
    } // setupUi

    void retranslateUi(QDialog *select)
    {
        select->setWindowTitle(QApplication::translate("select", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("select", "\347\256\200\345\215\225\345\215\225\350\257\215", Q_NULLPTR));
        label_2->setText(QApplication::translate("select", "\345\233\233\347\272\247\345\215\225\350\257\215", Q_NULLPTR));
        label_3->setText(QApplication::translate("select", "\345\205\255\347\272\247\345\215\225\350\257\215", Q_NULLPTR));
        pushButton->setText(QApplication::translate("select", "\351\200\211\346\213\251", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("select", "\351\200\211\346\213\251", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("select", "\351\200\211\346\213\251", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class select: public Ui_select {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECT_H
