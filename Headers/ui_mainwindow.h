/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTextEdit *leftTextBox;
    QLabel *text1;
    QTextEdit *middleTextBox;
    QLabel *text2;
    QTextEdit *rightTextBox;
    QLabel *text3;
    QPushButton *leftButton;
    QPushButton *middleButton;
    QPushButton *helpButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1041, 591);
        MainWindow->setMinimumSize(QSize(1041, 591));
        MainWindow->setMaximumSize(QSize(1041, 591));
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow#MainWindow {\n"
"\n"
"	background-color: #284B63;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        leftTextBox = new QTextEdit(centralwidget);
        leftTextBox->setObjectName(QString::fromUtf8("leftTextBox"));
        leftTextBox->setGeometry(QRect(20, 70, 321, 441));
        QFont font;
        font.setPointSize(11);
        leftTextBox->setFont(font);
        leftTextBox->setStyleSheet(QString::fromUtf8("QTextEdit#leftTextBox {\n"
"\n"
"	font-size: 11pt;\n"
"}"));
        leftTextBox->setOverwriteMode(false);
        text1 = new QLabel(centralwidget);
        text1->setObjectName(QString::fromUtf8("text1"));
        text1->setGeometry(QRect(20, 20, 321, 41));
        QFont font1;
        font1.setPointSize(18);
        text1->setFont(font1);
        text1->setStyleSheet(QString::fromUtf8("QLabel#text1 {\n"
"\n"
"	background-color: #284B63;\n"
"	color: #FFFFFF;\n"
"}"));
        text1->setAlignment(Qt::AlignCenter);
        middleTextBox = new QTextEdit(centralwidget);
        middleTextBox->setObjectName(QString::fromUtf8("middleTextBox"));
        middleTextBox->setGeometry(QRect(360, 70, 321, 441));
        middleTextBox->setStyleSheet(QString::fromUtf8("QTextEdit#middleTextBox {\n"
"\n"
"	font-size: 11pt;\n"
"}"));
        text2 = new QLabel(centralwidget);
        text2->setObjectName(QString::fromUtf8("text2"));
        text2->setGeometry(QRect(360, 20, 321, 41));
        text2->setFont(font1);
        text2->setStyleSheet(QString::fromUtf8("QLabel#text2 {\n"
"\n"
"	background-color: #284B63;\n"
"	color: #FFFFFF;\n"
"}"));
        text2->setAlignment(Qt::AlignCenter);
        rightTextBox = new QTextEdit(centralwidget);
        rightTextBox->setObjectName(QString::fromUtf8("rightTextBox"));
        rightTextBox->setGeometry(QRect(700, 70, 321, 441));
        rightTextBox->setStyleSheet(QString::fromUtf8("QTextEdit#rightTextBox {\n"
"\n"
"	font-size: 11pt;\n"
"}"));
        text3 = new QLabel(centralwidget);
        text3->setObjectName(QString::fromUtf8("text3"));
        text3->setGeometry(QRect(700, 20, 321, 41));
        text3->setFont(font1);
        text3->setStyleSheet(QString::fromUtf8("QLabel#text3 {\n"
"\n"
"	background-color: #284B63;\n"
"	color: #FFFFFF;\n"
"}"));
        text3->setAlignment(Qt::AlignCenter);
        leftButton = new QPushButton(centralwidget);
        leftButton->setObjectName(QString::fromUtf8("leftButton"));
        leftButton->setEnabled(false);
        leftButton->setGeometry(QRect(20, 530, 321, 41));
        QFont font2;
        font2.setPointSize(16);
        leftButton->setFont(font2);
        leftButton->setStyleSheet(QString::fromUtf8("QPushButton#leftButton {\n"
"\n"
"	background-color: #284B63;\n"
"	color: #FFFFFF;\n"
"	border: 5px solid #FFFFFF;\n"
"}\n"
"QPushButton#leftButton:hover {\n"
"\n"
"	background-color: #FFFFFF;\n"
"	color: #1A3344;\n"
"	border: 5px solid #1A3344;\n"
"}\n"
"QPushButton#leftButton:pressed {\n"
"\n"
"	background-color: #FFC300;\n"
"	color: #1A3344;\n"
"	border: 5px solid #1A3344;\n"
"}\n"
"QPushButton#leftButton:disabled {\n"
"\n"
"	background-color: #284B63;\n"
"	color: #4B7089;\n"
"	border: 5px solid #4B7089;\n"
"}"));
        middleButton = new QPushButton(centralwidget);
        middleButton->setObjectName(QString::fromUtf8("middleButton"));
        middleButton->setEnabled(false);
        middleButton->setGeometry(QRect(360, 530, 321, 41));
        middleButton->setFont(font2);
        middleButton->setStyleSheet(QString::fromUtf8("QPushButton#middleButton {\n"
"\n"
"	background-color: #284B63;\n"
"	color: #FFFFFF;\n"
"	border: 5px solid #FFFFFF;\n"
"}\n"
"QPushButton#middleButton:hover {\n"
"\n"
"	background-color: #FFFFFF;\n"
"	color: #1A3344;\n"
"	border: 5px solid #1A3344;\n"
"}\n"
"QPushButton#middleButton:pressed {\n"
"\n"
"	background-color: #FFC300;\n"
"	color: #1A3344;\n"
"	border: 5px solid #1A3344;\n"
"}\n"
"QPushButton#middleButton:disabled {\n"
"\n"
"	background-color: #284B63;\n"
"	color: #4B7089;\n"
"	border: 5px solid #4B7089;\n"
"}"));
        helpButton = new QPushButton(centralwidget);
        helpButton->setObjectName(QString::fromUtf8("helpButton"));
        helpButton->setGeometry(QRect(700, 530, 321, 41));
        helpButton->setFont(font2);
        helpButton->setStyleSheet(QString::fromUtf8("QPushButton#helpButton {\n"
"\n"
"	background-color: #284B63;\n"
"	color: #FFFFFF;\n"
"	border: 5px solid #FFFFFF;\n"
"}\n"
"QPushButton#helpButton:hover {\n"
"\n"
"	background-color: #FFFFFF;\n"
"	color: #1A3344;\n"
"	border: 5px solid #1A3344;\n"
"}\n"
"QPushButton#helpButton:pressed {\n"
"\n"
"	background-color: #FFC300;\n"
"	color: #1A3344;\n"
"	border: 5px solid #1A3344;\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Anki \320\270\320\274\320\277\320\276\321\200\321\202", nullptr));
        leftTextBox->setDocumentTitle(QString());
        leftTextBox->setPlaceholderText(QString());
        text1->setText(QApplication::translate("MainWindow", "\320\222\320\245\320\236\320\224", nullptr));
        text2->setText(QApplication::translate("MainWindow", "\320\242\320\240\320\220\320\235\320\241\320\232\320\240\320\230\320\237\320\246\320\230\320\257", nullptr));
        text3->setText(QApplication::translate("MainWindow", "\320\222\320\253\320\245\320\236\320\224", nullptr));
        leftButton->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\277\321\203\321\201\320\272", nullptr));
        middleButton->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\277\321\203\321\201\320\272", nullptr));
        helpButton->setText(QApplication::translate("MainWindow", "\320\233\320\270\321\206\320\265\320\275\320\267\320\270\321\217, \321\200\320\260\320\267\321\200\320\260\320\261\320\276\321\202\321\207\320\270\320\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
