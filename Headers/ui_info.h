/********************************************************************************
** Form generated from reading UI file 'info.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFO_H
#define UI_INFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Info
{
public:
    QPushButton *exitButton;
    QLabel *text1;
    QLabel *text2;
    QLabel *text3;
    QLabel *text4;
    QLabel *text5;
    QLabel *text6;
    QLabel *image;

    void setupUi(QDialog *Info)
    {
        if (Info->objectName().isEmpty())
            Info->setObjectName(QString::fromUtf8("Info"));
        Info->resize(801, 361);
        Info->setMinimumSize(QSize(0, 0));
        Info->setMaximumSize(QSize(99999, 99999));
        Info->setStyleSheet(QString::fromUtf8("QDialog#Info {\n"
"\n"
"	background-color: #284B63;\n"
"}"));
        exitButton = new QPushButton(Info);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setGeometry(QRect(20, 300, 761, 41));
        QFont font;
        font.setPointSize(16);
        exitButton->setFont(font);
        exitButton->setStyleSheet(QString::fromUtf8("QPushButton#exitButton {\n"
"\n"
"	background-color: #284B63;\n"
"	color: #FFFFFF;\n"
"	border: 5px solid #FFFFFF;\n"
"}\n"
"QPushButton#exitButton:hover {\n"
"\n"
"	background-color: #FFFFFF;\n"
"	color: #1A3344;\n"
"	border: 5px solid #1A3344;\n"
"}\n"
"QPushButton#exitButton:pressed {\n"
"\n"
"	background-color: #FFC300;\n"
"	color: #1A3344;\n"
"	border: 5px solid #1A3344;\n"
"}\n"
""));
        text1 = new QLabel(Info);
        text1->setObjectName(QString::fromUtf8("text1"));
        text1->setGeometry(QRect(20, 20, 301, 41));
        QFont font1;
        font1.setPointSize(20);
        text1->setFont(font1);
        text1->setStyleSheet(QString::fromUtf8("QLabel#text1 {\n"
"\n"
"	background-color: #284B63;\n"
"	color: #FFFFFF;\n"
"}"));
        text2 = new QLabel(Info);
        text2->setObjectName(QString::fromUtf8("text2"));
        text2->setGeometry(QRect(20, 70, 301, 31));
        text2->setFont(font);
        text2->setStyleSheet(QString::fromUtf8("QLabel#text2 {\n"
"\n"
"	background-color: #284B63;\n"
"	color: #FFFFFF;\n"
"}"));
        text3 = new QLabel(Info);
        text3->setObjectName(QString::fromUtf8("text3"));
        text3->setGeometry(QRect(20, 200, 301, 41));
        text3->setFont(font1);
        text3->setStyleSheet(QString::fromUtf8("QLabel#text3 {\n"
"\n"
"	background-color: #284B63;\n"
"	color: #FFFFFF;\n"
"}"));
        text4 = new QLabel(Info);
        text4->setObjectName(QString::fromUtf8("text4"));
        text4->setGeometry(QRect(20, 110, 301, 41));
        text4->setFont(font1);
        text4->setStyleSheet(QString::fromUtf8("QLabel#text4 {\n"
"\n"
"	background-color: #284B63;\n"
"	color: #FFFFFF;\n"
"}"));
        text5 = new QLabel(Info);
        text5->setObjectName(QString::fromUtf8("text5"));
        text5->setGeometry(QRect(20, 160, 301, 31));
        text5->setFont(font);
        text5->setStyleSheet(QString::fromUtf8("QLabel#text5 {\n"
"\n"
"	background-color: #284B63;\n"
"	color: #FFFFFF;\n"
"}"));
        text6 = new QLabel(Info);
        text6->setObjectName(QString::fromUtf8("text6"));
        text6->setGeometry(QRect(20, 250, 301, 31));
        text6->setFont(font);
        text6->setStyleSheet(QString::fromUtf8("QLabel#text6 {\n"
"\n"
"	background-color: #284B63;\n"
"	color: #FFFFFF;\n"
"}"));
        image = new QLabel(Info);
        image->setObjectName(QString::fromUtf8("image"));
        image->setGeometry(QRect(340, 20, 441, 261));
        image->setStyleSheet(QString::fromUtf8("QLabel#image {\n"
"\n"
"	background-image:url(:/Resources/Images/Logo.png) ;\n"
"}"));

        retranslateUi(Info);

        QMetaObject::connectSlotsByName(Info);
    } // setupUi

    void retranslateUi(QDialog *Info)
    {
        Info->setWindowTitle(QApplication::translate("Info", "\320\240\320\260\320\267\321\200\320\260\320\261\320\276\321\202\321\207\320\270\320\272", nullptr));
        exitButton->setText(QApplication::translate("Info", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
        text1->setText(QApplication::translate("Info", "\320\240\320\260\320\267\321\200\320\260\320\261\320\276\321\202\321\207\320\270\320\272", nullptr));
        text2->setText(QApplication::translate("Info", "\320\241\320\273\320\265\321\201\320\260\321\200\320\265\320\262 \320\235\320\270\320\272\320\276\320\273\320\260\320\271 \320\241\320\265\321\200\320\263\320\265\320\265\320\262\320\270\321\207", nullptr));
        text3->setText(QApplication::translate("Info", "\320\237\320\276\321\207\321\202\320\260", nullptr));
        text4->setText(QApplication::translate("Info", "GitHub", nullptr));
        text5->setText(QApplication::translate("Info", "konsilerinos", nullptr));
        text6->setText(QApplication::translate("Info", "n_slesarev@mail.ru", nullptr));
        image->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Info: public Ui_Info {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFO_H
