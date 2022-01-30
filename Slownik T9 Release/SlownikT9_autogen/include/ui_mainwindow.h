/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *Button1;
    QPushButton *Button2;
    QPushButton *Button3;
    QPushButton *Button4;
    QPushButton *Button5;
    QPushButton *Button6;
    QPushButton *Button7;
    QPushButton *Button8;
    QPushButton *Button9;
    QPushButton *Button;
    QLineEdit *Display;
    QPushButton *Buttondel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(459, 351);
        MainWindow->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"     background-color: DarkKhaki ; border: 1px solid gray;\n"
"	color: #ffffff;\n"
"}\n"
"QPushButton {\n"
"     background-color: #C0C0C0; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #A9A9A9; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
" "));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Button1 = new QPushButton(centralwidget);
        Button1->setObjectName(QString::fromUtf8("Button1"));
        Button1->setGeometry(QRect(100, 90, 75, 31));
        Button1->setStyleSheet(QString::fromUtf8(""));
        Button2 = new QPushButton(centralwidget);
        Button2->setObjectName(QString::fromUtf8("Button2"));
        Button2->setGeometry(QRect(190, 90, 75, 31));
        Button2->setStyleSheet(QString::fromUtf8(""));
        Button3 = new QPushButton(centralwidget);
        Button3->setObjectName(QString::fromUtf8("Button3"));
        Button3->setGeometry(QRect(280, 90, 75, 31));
        Button3->setStyleSheet(QString::fromUtf8(""));
        Button4 = new QPushButton(centralwidget);
        Button4->setObjectName(QString::fromUtf8("Button4"));
        Button4->setGeometry(QRect(100, 130, 75, 31));
        Button4->setStyleSheet(QString::fromUtf8(""));
        Button5 = new QPushButton(centralwidget);
        Button5->setObjectName(QString::fromUtf8("Button5"));
        Button5->setGeometry(QRect(190, 130, 75, 31));
        Button5->setStyleSheet(QString::fromUtf8(""));
        Button6 = new QPushButton(centralwidget);
        Button6->setObjectName(QString::fromUtf8("Button6"));
        Button6->setGeometry(QRect(280, 130, 75, 31));
        Button6->setStyleSheet(QString::fromUtf8(""));
        Button7 = new QPushButton(centralwidget);
        Button7->setObjectName(QString::fromUtf8("Button7"));
        Button7->setGeometry(QRect(280, 170, 75, 31));
        Button7->setStyleSheet(QString::fromUtf8(""));
        Button8 = new QPushButton(centralwidget);
        Button8->setObjectName(QString::fromUtf8("Button8"));
        Button8->setGeometry(QRect(100, 170, 75, 31));
        Button8->setStyleSheet(QString::fromUtf8(""));
        Button9 = new QPushButton(centralwidget);
        Button9->setObjectName(QString::fromUtf8("Button9"));
        Button9->setGeometry(QRect(190, 170, 75, 31));
        Button9->setStyleSheet(QString::fromUtf8(""));
        Button = new QPushButton(centralwidget);
        Button->setObjectName(QString::fromUtf8("Button"));
        Button->setGeometry(QRect(100, 210, 75, 31));
        Button->setStyleSheet(QString::fromUtf8(""));
        Display = new QLineEdit(centralwidget);
        Display->setObjectName(QString::fromUtf8("Display"));
        Display->setGeometry(QRect(100, 30, 261, 51));
        Buttondel = new QPushButton(centralwidget);
        Buttondel->setObjectName(QString::fromUtf8("Buttondel"));
        Buttondel->setGeometry(QRect(280, 210, 75, 31));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 459, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Button1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        Button2->setText(QCoreApplication::translate("MainWindow", "2 (abc)", nullptr));
        Button3->setText(QCoreApplication::translate("MainWindow", "3 (def)", nullptr));
        Button4->setText(QCoreApplication::translate("MainWindow", "4 (ghi)", nullptr));
        Button5->setText(QCoreApplication::translate("MainWindow", "5 (jkl)", nullptr));
        Button6->setText(QCoreApplication::translate("MainWindow", "6 (mno)", nullptr));
        Button7->setText(QCoreApplication::translate("MainWindow", "9 (wxyz)", nullptr));
        Button8->setText(QCoreApplication::translate("MainWindow", "7 (pqrs)", nullptr));
        Button9->setText(QCoreApplication::translate("MainWindow", "8 (tuv)", nullptr));
        Button->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        Buttondel->setText(QCoreApplication::translate("MainWindow", "<-", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
