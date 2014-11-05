/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "SendMoneyToAnotherCard.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QPushButton *Left_button_1;
    QPushButton *Left_button_2;
    QPushButton *Left_button_3;
    QPushButton *Left_button_4;
    QPushButton *number_1;
    QPushButton *number_2;
    QPushButton *number_3;
    QPushButton *number_4;
    QPushButton *number_5;
    QPushButton *number_6;
    QPushButton *number_7;
    QPushButton *number_8;
    QPushButton *number_9;
    QPushButton *number_10;
    QPushButton *Right_button_1;
    QPushButton *Right_button_2;
    QPushButton *Right_button_3;
    QPushButton *Right_button_4;
    SendMoneyToAnotherCard *frame;
    QPushButton *backspace;
    QPushButton *clear;
    QPushButton *OK;

    void setupUi(QWidget *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(850, 600);
        MainWindow->setMinimumSize(QSize(800, 600));
        MainWindow->setMaximumSize(QSize(850, 600));
        MainWindow->setMouseTracking(false);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QStringLiteral("background-color: rgb(197, 197, 197)"));
        Left_button_1 = new QPushButton(MainWindow);
        Left_button_1->setObjectName(QStringLiteral("Left_button_1"));
        Left_button_1->setGeometry(QRect(20, 350, 61, 51));
        Left_button_1->setAutoFillBackground(false);
        Left_button_1->setStyleSheet(QStringLiteral("border-image: url(../resources/button.png)"));
        Left_button_2 = new QPushButton(MainWindow);
        Left_button_2->setObjectName(QStringLiteral("Left_button_2"));
        Left_button_2->setGeometry(QRect(20, 280, 61, 51));
        Left_button_2->setAutoFillBackground(false);
        Left_button_2->setStyleSheet(QStringLiteral("border-image: url(../resources/button.png)"));
        Left_button_3 = new QPushButton(MainWindow);
        Left_button_3->setObjectName(QStringLiteral("Left_button_3"));
        Left_button_3->setGeometry(QRect(20, 210, 61, 51));
        Left_button_3->setAutoFillBackground(false);
        Left_button_3->setStyleSheet(QStringLiteral("border-image: url(../resources/button.png)"));
        Left_button_4 = new QPushButton(MainWindow);
        Left_button_4->setObjectName(QStringLiteral("Left_button_4"));
        Left_button_4->setGeometry(QRect(20, 140, 61, 51));
        Left_button_4->setAutoFillBackground(false);
        Left_button_4->setStyleSheet(QStringLiteral("border-image: url(../resources/button.png)"));
        number_1 = new QPushButton(MainWindow);
        number_1->setObjectName(QStringLiteral("number_1"));
        number_1->setGeometry(QRect(290, 470, 75, 23));
        number_1->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 127)"));
        number_2 = new QPushButton(MainWindow);
        number_2->setObjectName(QStringLiteral("number_2"));
        number_2->setGeometry(QRect(370, 470, 75, 23));
        number_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 127)"));
        number_3 = new QPushButton(MainWindow);
        number_3->setObjectName(QStringLiteral("number_3"));
        number_3->setGeometry(QRect(450, 470, 75, 23));
        number_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 127)"));
        number_4 = new QPushButton(MainWindow);
        number_4->setObjectName(QStringLiteral("number_4"));
        number_4->setGeometry(QRect(290, 500, 75, 23));
        number_4->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 127)"));
        number_5 = new QPushButton(MainWindow);
        number_5->setObjectName(QStringLiteral("number_5"));
        number_5->setGeometry(QRect(370, 500, 75, 23));
        number_5->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 127)"));
        number_6 = new QPushButton(MainWindow);
        number_6->setObjectName(QStringLiteral("number_6"));
        number_6->setGeometry(QRect(450, 500, 75, 23));
        number_6->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 127)"));
        number_7 = new QPushButton(MainWindow);
        number_7->setObjectName(QStringLiteral("number_7"));
        number_7->setGeometry(QRect(290, 530, 75, 23));
        number_7->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 127)"));
        number_8 = new QPushButton(MainWindow);
        number_8->setObjectName(QStringLiteral("number_8"));
        number_8->setGeometry(QRect(370, 530, 75, 23));
        number_8->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 127)"));
        number_9 = new QPushButton(MainWindow);
        number_9->setObjectName(QStringLiteral("number_9"));
        number_9->setGeometry(QRect(450, 530, 75, 23));
        number_9->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 127)"));
        number_10 = new QPushButton(MainWindow);
        number_10->setObjectName(QStringLiteral("number_10"));
        number_10->setGeometry(QRect(370, 560, 75, 23));
        number_10->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 127)"));
        Right_button_1 = new QPushButton(MainWindow);
        Right_button_1->setObjectName(QStringLiteral("Right_button_1"));
        Right_button_1->setGeometry(QRect(760, 350, 61, 51));
        Right_button_1->setAutoFillBackground(false);
        Right_button_1->setStyleSheet(QStringLiteral("border-image: url(../resources/button.png)"));
        Right_button_2 = new QPushButton(MainWindow);
        Right_button_2->setObjectName(QStringLiteral("Right_button_2"));
        Right_button_2->setGeometry(QRect(760, 280, 61, 51));
        Right_button_2->setAutoFillBackground(false);
        Right_button_2->setStyleSheet(QStringLiteral("border-image: url(../resources/button.png)"));
        Right_button_3 = new QPushButton(MainWindow);
        Right_button_3->setObjectName(QStringLiteral("Right_button_3"));
        Right_button_3->setGeometry(QRect(760, 210, 61, 51));
        Right_button_3->setAutoFillBackground(false);
        Right_button_3->setStyleSheet(QStringLiteral("border-image: url(../resources/button.png)"));
        Right_button_4 = new QPushButton(MainWindow);
        Right_button_4->setObjectName(QStringLiteral("Right_button_4"));
        Right_button_4->setGeometry(QRect(760, 140, 61, 51));
        Right_button_4->setAutoFillBackground(false);
        Right_button_4->setStyleSheet(QStringLiteral("border-image: url(../resources/button.png)"));
        frame = new SendMoneyToAnotherCard(MainWindow);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(90, 30, 660, 420));
        frame->setMinimumSize(QSize(660, 420));
        frame->setMaximumSize(QSize(660, 420));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        backspace = new QPushButton(MainWindow);
        backspace->setObjectName(QStringLiteral("backspace"));
        backspace->setGeometry(QRect(540, 470, 75, 23));
        backspace->setStyleSheet(QStringLiteral("background-color: rgb(255, 65, 68)"));
        clear = new QPushButton(MainWindow);
        clear->setObjectName(QStringLiteral("clear"));
        clear->setGeometry(QRect(540, 500, 75, 23));
        OK = new QPushButton(MainWindow);
        OK->setObjectName(QStringLiteral("OK"));
        OK->setGeometry(QRect(540, 530, 75, 23));
        OK->setStyleSheet(QStringLiteral("background-color: rgb(101, 255, 111)"));

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QWidget *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "ATM", 0));
        Left_button_1->setText(QString());
        Left_button_2->setText(QString());
        Left_button_3->setText(QString());
        Left_button_4->setText(QString());
        number_1->setText(QApplication::translate("MainWindow", "1", 0));
        number_2->setText(QApplication::translate("MainWindow", "2", 0));
        number_3->setText(QApplication::translate("MainWindow", "3", 0));
        number_4->setText(QApplication::translate("MainWindow", "4", 0));
        number_5->setText(QApplication::translate("MainWindow", "5", 0));
        number_6->setText(QApplication::translate("MainWindow", "6", 0));
        number_7->setText(QApplication::translate("MainWindow", "7", 0));
        number_8->setText(QApplication::translate("MainWindow", "8", 0));
        number_9->setText(QApplication::translate("MainWindow", "9", 0));
        number_10->setText(QApplication::translate("MainWindow", "0", 0));
        Right_button_1->setText(QString());
        Right_button_2->setText(QString());
        Right_button_3->setText(QString());
        Right_button_4->setText(QString());
        backspace->setText(QApplication::translate("MainWindow", "<-", 0));
        clear->setText(QApplication::translate("MainWindow", "C", 0));
        OK->setText(QApplication::translate("MainWindow", "OK", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
