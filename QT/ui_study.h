/********************************************************************************
** Form generated from reading UI file 'study.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDY_H
#define UI_STUDY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_study
{
public:
    QPushButton *pushButton_2;
    QPushButton *pushButton_1;
    QPlainTextEdit *textEditDevice;
    QPushButton *pushButton_4;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton_5;

    void setupUi(QWidget *study)
    {
        if (study->objectName().isEmpty())
            study->setObjectName(QStringLiteral("study"));
        study->resize(808, 624);
        study->setStyleSheet(QStringLiteral("#study{border-image: url(:/new/prefix1/picture/timgOOEYZ94H.jpg)}"));
        pushButton_2 = new QPushButton(study);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(460, 500, 151, 51));
        QFont font;
        font.setPointSize(20);
        pushButton_2->setFont(font);
        pushButton_1 = new QPushButton(study);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));
        pushButton_1->setGeometry(QRect(210, 500, 151, 51));
        pushButton_1->setFont(font);
        textEditDevice = new QPlainTextEdit(study);
        textEditDevice->setObjectName(QStringLiteral("textEditDevice"));
        textEditDevice->setGeometry(QRect(290, 60, 211, 61));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\344\273\277\345\256\213"));
        font1.setPointSize(15);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        textEditDevice->setFont(font1);
        textEditDevice->setStyleSheet(QString::fromUtf8("font: 15pt \"\344\273\277\345\256\213\";"));
        pushButton_4 = new QPushButton(study);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(570, 70, 141, 51));
        pushButton_4->setStyleSheet(QString::fromUtf8("font: 12pt \"\344\273\277\345\256\213\";"));
        groupBox = new QGroupBox(study);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(170, 330, 481, 121));
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("font: 15pt \"\344\273\277\345\256\213\";"));

        horizontalLayout_2->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setStyleSheet(QString::fromUtf8("font: 15pt \"\344\273\277\345\256\213\";"));

        horizontalLayout_2->addWidget(pushButton_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        label_2 = new QLabel(study);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(200, 70, 71, 51));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\344\273\277\345\256\213"));
        font2.setPointSize(16);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("font: 16pt \"\344\273\277\345\256\213\";"));
        label = new QLabel(study);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 210, 121, 41));
        label->setStyleSheet(QString::fromUtf8("font: 15pt \"\344\273\277\345\256\213\";"));
        lineEdit = new QLineEdit(study);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(290, 210, 211, 61));
        lineEdit->setStyleSheet(QString::fromUtf8("font: 15pt \"\344\273\277\345\256\213\";"));
        pushButton_5 = new QPushButton(study);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(720, 540, 93, 28));
        pushButton_5->setStyleSheet(QString::fromUtf8("font: 10pt \"\344\273\277\345\256\213\";"));

        retranslateUi(study);

        QMetaObject::connectSlotsByName(study);
    } // setupUi

    void retranslateUi(QWidget *study)
    {
        study->setWindowTitle(QApplication::translate("study", "\345\255\246\344\271\240", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("study", "\345\216\273\346\211\223\345\215\241", Q_NULLPTR));
        pushButton_1->setText(QApplication::translate("study", "\345\216\273\345\244\215\344\271\240", Q_NULLPTR));
        textEditDevice->setPlainText(QString());
        pushButton_4->setText(QApplication::translate("study", "\346\222\255\346\224\276\350\257\273\351\237\263", Q_NULLPTR));
        groupBox->setTitle(QString());
        pushButton->setText(QApplication::translate("study", "\351\231\214\347\224\237", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("study", "\347\206\237\346\202\211", Q_NULLPTR));
        label_2->setText(QApplication::translate("study", "\345\215\225\350\257\215\357\274\232", Q_NULLPTR));
        label->setText(QApplication::translate("study", "\344\270\255\346\226\207\351\207\212\344\271\211\357\274\232", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("study", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class study: public Ui_study {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDY_H
