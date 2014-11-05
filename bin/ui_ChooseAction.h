/********************************************************************************
** Form generated from reading UI file 'ChooseAction.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSEACTION_H
#define UI_CHOOSEACTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ChooseAction
{
public:
    QPushButton *cashing;
    QPushButton *cashTransfer;
    QPushButton *rechargeMobileAccount;
    QPushButton *lastOperations;
    QPushButton *backCard;
    QPushButton *information;
    QLabel *label;

    void setupUi(QFrame *ChooseAction)
    {
        if (ChooseAction->objectName().isEmpty())
            ChooseAction->setObjectName(QStringLiteral("ChooseAction"));
        ChooseAction->resize(660, 420);
        ChooseAction->setStyleSheet(QStringLiteral("background-color: rgb(147, 199, 255)"));
        ChooseAction->setFrameShape(QFrame::StyledPanel);
        ChooseAction->setFrameShadow(QFrame::Raised);
        cashing = new QPushButton(ChooseAction);
        cashing->setObjectName(QStringLiteral("cashing"));
        cashing->setGeometry(QRect(30, 180, 161, 51));
        cashing->setStyleSheet(QStringLiteral("border-image: url(../resources/background_for_lable.png)"));
        cashTransfer = new QPushButton(ChooseAction);
        cashTransfer->setObjectName(QStringLiteral("cashTransfer"));
        cashTransfer->setGeometry(QRect(30, 250, 161, 51));
        cashTransfer->setStyleSheet(QStringLiteral("border-image: url(../resources/background_for_lable.png)"));
        rechargeMobileAccount = new QPushButton(ChooseAction);
        rechargeMobileAccount->setObjectName(QStringLiteral("rechargeMobileAccount"));
        rechargeMobileAccount->setGeometry(QRect(30, 320, 161, 51));
        rechargeMobileAccount->setStyleSheet(QStringLiteral("border-image: url(../resources/background_for_lable.png)"));
        lastOperations = new QPushButton(ChooseAction);
        lastOperations->setObjectName(QStringLiteral("lastOperations"));
        lastOperations->setGeometry(QRect(470, 250, 161, 51));
        lastOperations->setStyleSheet(QStringLiteral("border-image: url(../resources/background_for_lable.png)"));
        backCard = new QPushButton(ChooseAction);
        backCard->setObjectName(QStringLiteral("backCard"));
        backCard->setGeometry(QRect(470, 320, 161, 51));
        backCard->setStyleSheet(QStringLiteral("border-image: url(../resources/background_for_lable.png)"));
        information = new QPushButton(ChooseAction);
        information->setObjectName(QStringLiteral("information"));
        information->setGeometry(QRect(470, 180, 161, 51));
        information->setStyleSheet(QStringLiteral("border-image: url(../resources/background_for_lable.png)"));
        label = new QLabel(ChooseAction);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 30, 661, 61));
        label->setTextFormat(Qt::AutoText);

        retranslateUi(ChooseAction);

        QMetaObject::connectSlotsByName(ChooseAction);
    } // setupUi

    void retranslateUi(QFrame *ChooseAction)
    {
        ChooseAction->setWindowTitle(QApplication::translate("ChooseAction", "Frame", 0));
        cashing->setText(QApplication::translate("ChooseAction", "\320\222\320\270\320\264\320\260\321\207\320\260 \320\263\320\276\321\202\321\226\320\262\320\272\320\270", 0));
        cashTransfer->setText(QApplication::translate("ChooseAction", "\320\237\320\265\321\200\320\265\321\207\320\270\321\201\320\273\320\265\320\275\320\275\321\217 \320\263\320\276\321\202\321\226\320\262\320\272\320\270", 0));
        rechargeMobileAccount->setText(QApplication::translate("ChooseAction", "\320\237\320\276\320\277\320\276\320\262\320\275\320\265\320\275\320\275\321\217 \320\274\320\276\320\261. \321\200\320\260\321\205\321\203\320\275\320\272\321\203", 0));
        lastOperations->setText(QApplication::translate("ChooseAction", "\320\236\321\201\321\202\320\260\320\275\320\275\321\226 \320\276\320\277\320\265\321\200\320\260\321\206\321\226\321\227", 0));
        backCard->setText(QApplication::translate("ChooseAction", "\320\237\320\276\320\262\320\265\321\200\320\275\320\265\320\275\320\275\321\217 \320\272\320\260\321\200\321\202\320\272\320\270", 0));
        information->setText(QApplication::translate("ChooseAction", "\320\206\320\275\321\204\320\276\321\200\320\274\320\260\321\206\321\226\321\217 \320\277\321\200\320\276 \320\272\320\260\321\200\321\202\320\272\321\203", 0));
        label->setText(QApplication::translate("ChooseAction", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt;\">\320\222\320\270\320\261\320\265\321\200\321\226\321\202\321\214 \320\264\321\226\321\216</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class ChooseAction: public Ui_ChooseAction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSEACTION_H
