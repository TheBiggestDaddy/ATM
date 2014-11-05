/********************************************************************************
** Form generated from reading UI file 'aChooseAction.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACHOOSEACTION_H
#define UI_ACHOOSEACTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Frame
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QFrame *Frame)
    {
        if (Frame->objectName().isEmpty())
            Frame->setObjectName(QStringLiteral("Frame"));
        Frame->resize(660, 420);
        Frame->setMinimumSize(QSize(660, 420));
        Frame->setMaximumSize(QSize(660, 420));
        Frame->setStyleSheet(QStringLiteral("background-color: rgb(147, 199, 255)"));
        Frame->setFrameShape(QFrame::StyledPanel);
        Frame->setFrameShadow(QFrame::Raised);
        pushButton = new QPushButton(Frame);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 50, 161, 51));
        pushButton->setStyleSheet(QStringLiteral("border-image: url(../resources/background_for_lable.png)"));
        pushButton_2 = new QPushButton(Frame);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(30, 110, 161, 51));
        pushButton_2->setStyleSheet(QStringLiteral("border-image: url(../resources/background_for_lable.png)"));

        retranslateUi(Frame);

        QMetaObject::connectSlotsByName(Frame);
    } // setupUi

    void retranslateUi(QFrame *Frame)
    {
        Frame->setWindowTitle(QApplication::translate("Frame", "Frame", 0));
        pushButton->setText(QApplication::translate("Frame", "\320\222\320\270\320\264\320\260\321\207\320\260 \320\263\320\276\321\202\321\226\320\262\320\272\320\270", 0));
        pushButton_2->setText(QApplication::translate("Frame", "\320\222\320\270\320\264\320\260\321\207\320\260 \320\263\320\276\321\202\321\226\320\262\320\272\320\270", 0));
    } // retranslateUi

};

namespace Ui {
    class Frame: public Ui_Frame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACHOOSEACTION_H
