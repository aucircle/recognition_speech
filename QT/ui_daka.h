/********************************************************************************
** Form generated from reading UI file 'daka.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DAKA_H
#define UI_DAKA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_daka
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QPushButton *pushButton_3;
    QCalendarWidget *calendarWidget;
    QPushButton *pushButton_4;
    QLabel *label_4;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_2;
    QLabel *label_5;
    QLineEdit *lineEdit;
    QLabel *label_6;
    QLineEdit *lineEdit_3;
    QLabel *label_7;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;

    void setupUi(QWidget *daka)
    {
        if (daka->objectName().isEmpty())
            daka->setObjectName(QStringLiteral("daka"));
        daka->resize(806, 627);
        daka->setStyleSheet(QStringLiteral("#daka{border-image: url(:/new/prefix1/picture/timg1.jpg);}"));
        pushButton = new QPushButton(daka);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 500, 211, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("\344\273\277\345\256\213"));
        font.setPointSize(20);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("font: 20pt \"\344\273\277\345\256\213\";"));
        pushButton_2 = new QPushButton(daka);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(540, 500, 211, 61));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("font: 20pt \"\344\273\277\345\256\213\";"));
        label = new QLabel(daka);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 40, 201, 31));
        label->setStyleSheet(QString::fromUtf8("font: 15pt \"\344\273\277\345\256\213\";"));
        pushButton_3 = new QPushButton(daka);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(560, 310, 161, 71));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\344\273\277\345\256\213"));
        font1.setPointSize(35);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        pushButton_3->setFont(font1);
        pushButton_3->setStyleSheet(QString::fromUtf8("font: 35pt \"\344\273\277\345\256\213\";"));
        calendarWidget = new QCalendarWidget(daka);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));
        calendarWidget->setGeometry(QRect(500, 0, 296, 236));
        pushButton_4 = new QPushButton(daka);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(390, 40, 93, 28));
        pushButton_4->setStyleSheet(QString::fromUtf8("font: 15pt \"\344\273\277\345\256\213\";"));
        label_4 = new QLabel(daka);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(230, 90, 141, 31));
        label_4->setStyleSheet(QString::fromUtf8("font: 15pt \"\344\273\277\345\256\213\";"));
        groupBox = new QGroupBox(daka);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(90, 300, 371, 81));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        QFont font2;
        font2.setPointSize(20);
        lineEdit_2->setFont(font2);

        horizontalLayout->addWidget(lineEdit_2);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("font: 20pt \"\344\273\277\345\256\213\";"));

        horizontalLayout->addWidget(label_5);

        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setFont(font2);

        horizontalLayout->addWidget(lineEdit);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8("font: 20pt \"\344\273\277\345\256\213\";"));

        horizontalLayout->addWidget(label_6);

        lineEdit_3 = new QLineEdit(daka);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(220, 30, 161, 51));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\344\273\277\345\256\213"));
        font3.setPointSize(15);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setWeight(50);
        lineEdit_3->setFont(font3);
        lineEdit_3->setStyleSheet(QString::fromUtf8("font: 15pt \"\344\273\277\345\256\213\";"));
        label_7 = new QLabel(daka);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(70, 420, 571, 41));
        QFont font4;
        font4.setPointSize(10);
        label_7->setFont(font4);
        pushButton_5 = new QPushButton(daka);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(280, 500, 201, 61));
        pushButton_5->setFont(font);
        pushButton_5->setStyleSheet(QString::fromUtf8("font: 20pt \"\344\273\277\345\256\213\";"));
        pushButton_6 = new QPushButton(daka);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(710, 570, 93, 28));
        pushButton_6->setStyleSheet(QString::fromUtf8("font: 10pt \"\344\273\277\345\256\213\";"));

        retranslateUi(daka);

        QMetaObject::connectSlotsByName(daka);
    } // setupUi

    void retranslateUi(QWidget *daka)
    {
        daka->setWindowTitle(QApplication::translate("daka", "\346\211\223\345\215\241", Q_NULLPTR));
        pushButton->setText(QApplication::translate("daka", "\350\277\224\345\233\236\345\255\246\344\271\240\347\225\214\351\235\242", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("daka", "\350\277\224\345\233\236\345\244\215\344\271\240\347\225\214\351\235\242", Q_NULLPTR));
        label->setText(QApplication::translate("daka", "\344\273\212\346\227\245\345\255\246\344\271\240\346\227\266\351\225\277\344\270\272\357\274\232", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("daka", "\346\211\223\345\215\241", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("daka", "\345\210\267\346\226\260", Q_NULLPTR));
        label_4->setText(QApplication::translate("daka", "\346\227\266\357\274\232\345\210\206\357\274\232\347\247\222", Q_NULLPTR));
        groupBox->setTitle(QString());
        lineEdit_2->setText(QApplication::translate("daka", "6", Q_NULLPTR));
        label_5->setText(QApplication::translate("daka", "\346\234\210\345\205\261\346\211\223\345\215\241\357\274\232", Q_NULLPTR));
        lineEdit->setText(QApplication::translate("daka", "0", Q_NULLPTR));
        label_6->setText(QApplication::translate("daka", "\345\244\251", Q_NULLPTR));
        lineEdit_3->setText(QString());
        label_7->setText(QApplication::translate("daka", "\346\263\250\357\274\232\346\257\217\346\227\245\345\255\246\344\271\240\346\227\266\351\225\277\350\276\276\345\210\26015\345\210\206\351\222\237\357\274\214\345\215\263\345\217\257\346\211\223\345\215\241\343\200\202\357\274\210\346\234\254\346\254\241\346\274\224\347\244\272\351\207\207\347\224\250\346\273\24115\347\247\222\346\211\223\345\215\241\357\274\211", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("daka", "\345\210\207\346\215\242\350\264\246\345\217\267", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("daka", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class daka: public Ui_daka {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DAKA_H
