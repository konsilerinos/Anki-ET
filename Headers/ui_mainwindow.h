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
    QLabel *inputLabel;
    QLabel *transcriptionLabel;
    QLabel *outputLabel;
    QTextEdit *inputTextEdit;
    QTextEdit *transcriptionTextEdit;
    QTextEdit *outputTextEdit;
    QPushButton *infoButton;
    QPushButton *transcriptionButton;
    QPushButton *inputButton;
    QLabel *instructionLabel;
    QPushButton *ctrlcButton;
    QLabel *logLabel;
    QTextEdit *logTextEdit;
    QPushButton *clearButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1041, 481);
        MainWindow->setMinimumSize(QSize(1041, 481));
        MainWindow->setMaximumSize(QSize(1041, 481));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        inputLabel = new QLabel(centralwidget);
        inputLabel->setObjectName(QString::fromUtf8("inputLabel"));
        inputLabel->setGeometry(QRect(260, 10, 251, 41));
        inputLabel->setMinimumSize(QSize(171, 41));
        QFont font;
        font.setPointSize(14);
        inputLabel->setFont(font);
        inputLabel->setStyleSheet(QString::fromUtf8("QLabel#inputLabel {\n"
"\n"
"	background-color: #F5CB5C;\n"
"	border: 2px solid #242423;\n"
"}"));
        inputLabel->setAlignment(Qt::AlignCenter);
        transcriptionLabel = new QLabel(centralwidget);
        transcriptionLabel->setObjectName(QString::fromUtf8("transcriptionLabel"));
        transcriptionLabel->setGeometry(QRect(520, 10, 251, 41));
        transcriptionLabel->setMinimumSize(QSize(171, 41));
        transcriptionLabel->setFont(font);
        transcriptionLabel->setStyleSheet(QString::fromUtf8("QLabel#transcriptionLabel {\n"
"\n"
"	background-color: #F5CB5C;\n"
"	border: 2px solid #242423;\n"
"}"));
        transcriptionLabel->setAlignment(Qt::AlignCenter);
        outputLabel = new QLabel(centralwidget);
        outputLabel->setObjectName(QString::fromUtf8("outputLabel"));
        outputLabel->setGeometry(QRect(780, 10, 251, 41));
        outputLabel->setMinimumSize(QSize(171, 41));
        outputLabel->setFont(font);
        outputLabel->setStyleSheet(QString::fromUtf8("QLabel#outputLabel {\n"
"\n"
"	background-color: #F5CB5C;\n"
"	border: 2px solid #242423;\n"
"}"));
        outputLabel->setAlignment(Qt::AlignCenter);
        inputTextEdit = new QTextEdit(centralwidget);
        inputTextEdit->setObjectName(QString::fromUtf8("inputTextEdit"));
        inputTextEdit->setGeometry(QRect(260, 60, 251, 331));
        QFont font1;
        font1.setPointSize(12);
        inputTextEdit->setFont(font1);
        inputTextEdit->setStyleSheet(QString::fromUtf8("QTextEdit#inputTextEdit {\n"
"\n"
"	border: 2px solid #333533;\n"
"}"));
        transcriptionTextEdit = new QTextEdit(centralwidget);
        transcriptionTextEdit->setObjectName(QString::fromUtf8("transcriptionTextEdit"));
        transcriptionTextEdit->setGeometry(QRect(520, 60, 251, 331));
        transcriptionTextEdit->setFont(font1);
        transcriptionTextEdit->setStyleSheet(QString::fromUtf8("QTextEdit#transcriptionTextEdit {\n"
"\n"
"	border: 2px solid #333533;\n"
"}"));
        outputTextEdit = new QTextEdit(centralwidget);
        outputTextEdit->setObjectName(QString::fromUtf8("outputTextEdit"));
        outputTextEdit->setGeometry(QRect(780, 60, 251, 331));
        outputTextEdit->setFont(font1);
        outputTextEdit->setStyleSheet(QString::fromUtf8("QTextEdit#outputTextEdit {\n"
"\n"
"	border: 2px solid #333533;\n"
"}"));
        infoButton = new QPushButton(centralwidget);
        infoButton->setObjectName(QString::fromUtf8("infoButton"));
        infoButton->setGeometry(QRect(10, 260, 241, 131));
        infoButton->setFont(font);
        infoButton->setStyleSheet(QString::fromUtf8("QPushButton#infoButton {\n"
"\n"
"	background-color: #284B63;\n"
"	border: 2px solid #333533;\n"
"	\n"
"	background-image: url(:/Images/image.png);\n"
"}\n"
"\n"
""));
        transcriptionButton = new QPushButton(centralwidget);
        transcriptionButton->setObjectName(QString::fromUtf8("transcriptionButton"));
        transcriptionButton->setEnabled(true);
        transcriptionButton->setGeometry(QRect(10, 110, 241, 41));
        transcriptionButton->setFont(font1);
        transcriptionButton->setStyleSheet(QString::fromUtf8("QPushButton#transcriptionButton {\n"
"\n"
"	background-color: #284B63;\n"
"	border: 2px solid #333533;\n"
"	color: #FFFFFF;\n"
"}\n"
"\n"
"QPushButton#transcriptionButton:hover {\n"
"\n"
"	background-color: #FFFFFF;\n"
"	color: #333533;\n"
"}\n"
"\n"
"QPushButton#transcriptionButton:pressed {\n"
"\n"
"	background-color: #F5CB5C;\n"
"}\n"
"\n"
""));
        inputButton = new QPushButton(centralwidget);
        inputButton->setObjectName(QString::fromUtf8("inputButton"));
        inputButton->setEnabled(true);
        inputButton->setGeometry(QRect(10, 60, 241, 41));
        inputButton->setFont(font1);
        inputButton->setStyleSheet(QString::fromUtf8("QPushButton#inputButton {\n"
"\n"
"	background-color: #284B63;\n"
"	border: 2px solid #333533;\n"
"	color: #FFFFFF;\n"
"}\n"
"\n"
"QPushButton#inputButton:hover {\n"
"\n"
"	background-color: #FFFFFF;\n"
"	color: #333533;\n"
"}\n"
"\n"
"QPushButton#inputButton:pressed {\n"
"\n"
"	background-color: #F5CB5C;\n"
"}"));
        instructionLabel = new QLabel(centralwidget);
        instructionLabel->setObjectName(QString::fromUtf8("instructionLabel"));
        instructionLabel->setGeometry(QRect(10, 10, 241, 41));
        instructionLabel->setMinimumSize(QSize(171, 41));
        instructionLabel->setFont(font);
        instructionLabel->setStyleSheet(QString::fromUtf8("QLabel#instructionLabel {\n"
"\n"
"	background-color: #F5CB5C;\n"
"	border: 2px solid #242423;\n"
"}"));
        instructionLabel->setAlignment(Qt::AlignCenter);
        ctrlcButton = new QPushButton(centralwidget);
        ctrlcButton->setObjectName(QString::fromUtf8("ctrlcButton"));
        ctrlcButton->setEnabled(true);
        ctrlcButton->setGeometry(QRect(10, 160, 241, 41));
        ctrlcButton->setFont(font1);
        ctrlcButton->setStyleSheet(QString::fromUtf8("QPushButton#ctrlcButton {\n"
"\n"
"	background-color: #284B63;\n"
"	border: 2px solid #333533;\n"
"	color: #FFFFFF;\n"
"}\n"
"\n"
"QPushButton#ctrlcButton:hover {\n"
"\n"
"	background-color: #FFFFFF;\n"
"	color: #333533;\n"
"}\n"
"\n"
"QPushButton#ctrlcButton:pressed {\n"
"\n"
"	background-color: #F5CB5C;\n"
"}\n"
"\n"
""));
        logLabel = new QLabel(centralwidget);
        logLabel->setObjectName(QString::fromUtf8("logLabel"));
        logLabel->setGeometry(QRect(10, 400, 241, 71));
        logLabel->setMinimumSize(QSize(171, 41));
        logLabel->setFont(font);
        logLabel->setStyleSheet(QString::fromUtf8("QLabel#logLabel {\n"
"\n"
"	background-color: #F5CB5C;\n"
"	border: 2px solid #242423;\n"
"}"));
        logLabel->setAlignment(Qt::AlignCenter);
        logTextEdit = new QTextEdit(centralwidget);
        logTextEdit->setObjectName(QString::fromUtf8("logTextEdit"));
        logTextEdit->setGeometry(QRect(260, 400, 771, 71));
        QFont font2;
        font2.setPointSize(10);
        logTextEdit->setFont(font2);
        logTextEdit->setStyleSheet(QString::fromUtf8("QTextEdit#logTextEdit {\n"
"\n"
"	border: 2px solid #333533;\n"
"}"));
        clearButton = new QPushButton(centralwidget);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));
        clearButton->setEnabled(true);
        clearButton->setGeometry(QRect(10, 210, 241, 41));
        clearButton->setFont(font1);
        clearButton->setStyleSheet(QString::fromUtf8("QPushButton#clearButton {\n"
"\n"
"	background-color: #284B63;\n"
"	border: 2px solid #333533;\n"
"	color: #FFFFFF;\n"
"}\n"
"\n"
"QPushButton#clearButton:hover {\n"
"\n"
"	background-color: #FFFFFF;\n"
"	color: #333533;\n"
"}\n"
"\n"
"QPushButton#clearButton:pressed {\n"
"\n"
"	background-color: #F5CB5C;\n"
"}\n"
"\n"
""));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Anki-ET", nullptr));
        inputLabel->setText(QApplication::translate("MainWindow", "\320\222\321\205\320\276\320\264", nullptr));
        transcriptionLabel->setText(QApplication::translate("MainWindow", "\320\242\321\200\320\260\320\275\321\201\320\272\321\200\320\270\320\277\321\206\320\270\321\217", nullptr));
        outputLabel->setText(QApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        infoButton->setText(QString());
        transcriptionButton->setText(QApplication::translate("MainWindow", "En + Tr + Rus \342\206\222 En | Tr | Rus", nullptr));
        inputButton->setText(QApplication::translate("MainWindow", "Rus + En \342\206\222 En", nullptr));
        instructionLabel->setText(QApplication::translate("MainWindow", "\320\230\320\275\321\201\321\202\321\200\321\203\320\272\321\206\320\270\320\270", nullptr));
        ctrlcButton->setText(QApplication::translate("MainWindow", "Ctrl+C \320\277\320\276 \320\277\320\276\320\273\321\216 \"\320\222\321\213\321\205\320\276\320\264\"", nullptr));
        logLabel->setText(QApplication::translate("MainWindow", "\320\233\320\276\320\263", nullptr));
        clearButton->setText(QApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\272\320\260 \320\277\320\276\320\273\320\265\320\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
