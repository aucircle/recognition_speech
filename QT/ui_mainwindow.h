/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_5;
    QLineEdit *lineEdit;
    QPushButton *pushButton_6;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(865, 631);
        MainWindow->setStyleSheet(QStringLiteral(""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QFont font;
        font.setKerning(true);
        font.setStyleStrategy(QFont::NoAntialias);
        centralWidget->setFont(font);
        centralWidget->setContextMenuPolicy(Qt::DefaultContextMenu);
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(400, 380, 200, 80));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\344\273\277\345\256\213"));
        font1.setPointSize(20);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        pushButton_3->setFont(font1);
        pushButton_3->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/picture/anniu.png);"));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(179, 380, 201, 80));
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/picture/anniu.png);"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(180, 280, 421, 81));
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/picture/anniu.png);"));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(650, 460, 141, 51));
        pushButton_4->setStyleSheet(QString::fromUtf8("font: 15pt \"\344\273\277\345\256\213\";"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 130, 251, 51));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/picture/ting4.jpg);\n"
"font: 16pt \"\344\273\277\345\256\213\";"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(190, 40, 231, 41));
        label_2->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/picture/ting4.jpg);\n"
"font: 16pt \"\344\273\277\345\256\213\";"));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(460, 40, 151, 51));
        pushButton_5->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/picture/anniu.png);\n"
"font: 16pt \"\344\273\277\345\256\213\";"));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(380, 130, 231, 51));
        lineEdit->setAutoFillBackground(false);
        lineEdit->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/picture/ting4.jpg);\n"
"font: 16pt \"\344\273\277\345\256\213\";"));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(620, 140, 121, 31));
        pushButton_6->setStyleSheet(QString::fromUtf8("font: 10pt \"\344\273\277\345\256\213\";"));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\350\213\261\350\257\255\345\217\243\350\257\255\347\273\203\344\271\240", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "\345\216\273\346\211\223\345\215\241", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "\345\244\215\344\271\240", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213\347\273\203\344\271\240\345\220\247\357\274\201", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "\345\210\207\346\215\242\350\264\246\345\217\267", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\345\275\223\345\211\215\350\257\276\346\234\254/\350\257\215\345\272\223\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\351\200\211\346\213\251\350\257\276\346\234\254/\350\257\215\345\272\223\357\274\232", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindow", "\345\216\273\351\200\211\346\213\251", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("MainWindow", "\346\237\245\347\234\213\345\215\225\350\257\215\345\210\227\350\241\250", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
