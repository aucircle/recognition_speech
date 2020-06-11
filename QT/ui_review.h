/********************************************************************************
** Form generated from reading UI file 'review.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REVIEW_H
#define UI_REVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_review
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPlainTextEdit *plainTextEdit2;
    QLabel *label;
    QPlainTextEdit *textEditDevice;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QLabel *label_3;
    QPushButton *pushButton_9;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_3;
    QPushButton *pushButton_8;
    QPushButton *pushButton_4;
    QPushButton *pushButton_7;
    QPushButton *pushButton_10;

    void setupUi(QWidget *review)
    {
        if (review->objectName().isEmpty())
            review->setObjectName(QStringLiteral("review"));
        review->resize(797, 612);
        review->setStyleSheet(QStringLiteral("#review{border-image: url(:/new/prefix1/picture/timgOOEYZ94H.jpg)}"));
        pushButton = new QPushButton(review);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(170, 440, 181, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("\344\273\277\345\256\213"));
        font.setPointSize(20);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("font: 20pt \"\344\273\277\345\256\213\";"));
        pushButton_2 = new QPushButton(review);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(450, 440, 161, 51));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("font: 20pt \"\344\273\277\345\256\213\";"));
        plainTextEdit2 = new QPlainTextEdit(review);
        plainTextEdit2->setObjectName(QStringLiteral("plainTextEdit2"));
        plainTextEdit2->setGeometry(QRect(280, 190, 221, 41));
        plainTextEdit2->setStyleSheet(QString::fromUtf8("font: 15pt \"\344\273\277\345\256\213\";"));
        label = new QLabel(review);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(200, 190, 81, 31));
        label->setStyleSheet(QString::fromUtf8("font: 15pt \"\344\273\277\345\256\213\";"));
        textEditDevice = new QPlainTextEdit(review);
        textEditDevice->setObjectName(QStringLiteral("textEditDevice"));
        textEditDevice->setGeometry(QRect(310, 20, 101, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\344\273\277\345\256\213"));
        font1.setPointSize(15);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        textEditDevice->setFont(font1);
        textEditDevice->setStyleSheet(QString::fromUtf8("font: 15pt \"\344\273\277\345\256\213\";"));
        pushButton_5 = new QPushButton(review);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(210, 290, 131, 51));
        pushButton_5->setStyleSheet(QString::fromUtf8("font: 15pt \"\344\273\277\345\256\213\";"));
        pushButton_6 = new QPushButton(review);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(420, 290, 141, 51));
        pushButton_6->setStyleSheet(QString::fromUtf8("font: 15pt \"\344\273\277\345\256\213\";"));
        label_3 = new QLabel(review);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(230, 20, 111, 31));
        label_3->setStyleSheet(QString::fromUtf8("font: 15pt \"\344\273\277\345\256\213\";"));
        pushButton_9 = new QPushButton(review);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(440, 20, 161, 41));
        pushButton_9->setStyleSheet(QString::fromUtf8("font: 15pt \"\344\273\277\345\256\213\";"));
        layoutWidget = new QWidget(review);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(180, 100, 471, 30));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setStyleSheet(QString::fromUtf8("font: 10pt \"\344\273\277\345\256\213\";"));

        horizontalLayout->addWidget(pushButton_3);

        pushButton_8 = new QPushButton(layoutWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setStyleSheet(QString::fromUtf8("font: 10pt \"\344\273\277\345\256\213\";"));

        horizontalLayout->addWidget(pushButton_8);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setStyleSheet(QString::fromUtf8("font: 10pt \"\344\273\277\345\256\213\";"));

        horizontalLayout->addWidget(pushButton_4);

        pushButton_7 = new QPushButton(review);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(710, 500, 93, 28));
        pushButton_7->setStyleSheet(QString::fromUtf8("font: 10pt \"\344\273\277\345\256\213\";"));
        pushButton_10 = new QPushButton(review);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(330, 380, 111, 31));
        pushButton_10->setStyleSheet(QString::fromUtf8("font: 10pt \"\344\273\277\345\256\213\";"));

        retranslateUi(review);

        QMetaObject::connectSlotsByName(review);
    } // setupUi

    void retranslateUi(QWidget *review)
    {
        review->setWindowTitle(QApplication::translate("review", "\345\244\215\344\271\240", Q_NULLPTR));
        pushButton->setText(QApplication::translate("review", "\345\216\273\345\255\246\344\271\240", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("review", "\345\216\273\346\211\223\345\215\241", Q_NULLPTR));
        label->setText(QApplication::translate("review", "\345\276\227\345\210\206\357\274\232", Q_NULLPTR));
        textEditDevice->setPlainText(QString());
        pushButton_5->setText(QApplication::translate("review", "\351\231\214\347\224\237", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("review", "\347\206\237\346\202\211", Q_NULLPTR));
        label_3->setText(QApplication::translate("review", "\345\215\225\350\257\215\357\274\232", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("review", "\346\222\255\346\224\276\346\255\243\347\241\256\350\257\273\351\237\263", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("review", "\345\274\200\345\247\213\345\275\225\351\237\263", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("review", "\346\222\255\346\224\276\345\275\225\351\237\263", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("review", "\346\237\245\347\234\213\345\276\227\345\210\206", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("review", "\350\277\224\345\233\236", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("review", "\345\210\267\346\226\260", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class review: public Ui_review {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REVIEW_H
