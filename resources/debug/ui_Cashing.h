/********************************************************************************
** Form generated from reading UI file 'Cashing.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CASHING_H
#define UI_CASHING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Cashing
{
public:
    QPushButton *cashing;
    QPushButton *showBalance;
    QPushButton *cashTransfer;
    QPushButton *rechargeMobileAccount;
    QPushButton *backCard;
    QPushButton *lastOperations;
    QPushButton *information;
    QPushButton *rechargeMobileAccount_2;
    QLabel *label;

    void setupUi(QFrame *Cashing)
    {
        if (Cashing->objectName().isEmpty())
            Cashing->setObjectName(QStringLiteral("Cashing"));
        Cashing->resize(660, 420);
        Cashing->setStyleSheet(QStringLiteral("background-color: rgb(147, 199, 255)"));
        Cashing->setFrameShape(QFrame::StyledPanel);
        Cashing->setFrameShadow(QFrame::Raised);
        cashing = new QPushButton(Cashing);
        cashing->setObjectName(QStringLiteral("cashing"));
        cashing->setGeometry(QRect(30, 110, 161, 51));
        cashing->setStyleSheet(QStringLiteral("border-image: url(../resources/background_for_lable.png)"));
        showBalance = new QPushButton(Cashing);
        showBalance->setObjectName(QStringLiteral("showBalance"));
        showBalance->setGeometry(QRect(470, 180, 161, 51));
        showBalance->setStyleSheet(QStringLiteral("border-image: url(../resources/background_for_lable.png)"));
        cashTransfer = new QPushButton(Cashing);
        cashTransfer->setObjectName(QStringLiteral("cashTransfer"));
        cashTransfer->setGeometry(QRect(30, 180, 161, 51));
        cashTransfer->setStyleSheet(QStringLiteral("border-image: url(../resources/background_for_lable.png)"));
        rechargeMobileAccount = new QPushButton(Cashing);
        rechargeMobileAccount->setObjectName(QStringLiteral("rechargeMobileAccount"));
        rechargeMobileAccount->setGeometry(QRect(30, 250, 161, 51));
        rechargeMobileAccount->setStyleSheet(QStringLiteral("border-image: url(../resources/background_for_lable.png)"));
        backCard = new QPushButton(Cashing);
        backCard->setObjectName(QStringLiteral("backCard"));
        backCard->setGeometry(QRect(470, 320, 161, 51));
        backCard->setStyleSheet(QStringLiteral("border-image: url(../resources/background_for_lable.png)"));
        lastOperations = new QPushButton(Cashing);
        lastOperations->setObjectName(QStringLiteral("lastOperations"));
        lastOperations->setGeometry(QRect(470, 250, 161, 51));
        lastOperations->setStyleSheet(QStringLiteral("border-image: url(../resources/background_for_lable.png)"));
        information = new QPushButton(Cashing);
        information->setObjectName(QStringLiteral("information"));
        information->setGeometry(QRect(470, 110, 161, 51));
        information->setStyleSheet(QStringLiteral("border-image: url(../resources/background_for_lable.png)"));
        rechargeMobileAccount_2 = new QPushButton(Cashing);
        rechargeMobileAccount_2->setObjectName(QStringLiteral("rechargeMobileAccount_2"));
        rechargeMobileAccount_2->setGeometry(QRect(30, 320, 161, 51));
        rechargeMobileAccount_2->setStyleSheet(QStringLiteral("border-image: url(../resources/background_for_lable.png)"));
        label = new QLabel(Cashing);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(190, 10, 281, 61));
        label->setTextFormat(Qt::AutoText);

        retranslateUi(Cashing);

        QMetaObject::connectSlotsByName(Cashing);
    } // setupUi

    void retranslateUi(QFrame *Cashing)
    {
        Cashing->setWindowTitle(QApplication::translate("Cashing", "Frame", 0));
        cashing->setText(QApplication::translate("Cashing", "5 000", 0));
        showBalance->setText(QApplication::translate("Cashing", "50", 0));
        cashTransfer->setText(QApplication::translate("Cashing", "1 000", 0));
        rechargeMobileAccount->setText(QApplication::translate("Cashing", "500", 0));
        backCard->setText(QApplication::translate("Cashing", "\320\206\320\275\321\210\320\260 \321\201\321\203\320\274\320\260", 0));
        lastOperations->setText(QApplication::translate("Cashing", "10", 0));
        information->setText(QApplication::translate("Cashing", "100", 0));
        rechargeMobileAccount_2->setText(QApplication::translate("Cashing", "200", 0));
        label->setText(QApplication::translate("Cashing", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">\320\222\320\270\320\261\320\265\321\200\321\226\321\202\321\214 \321\201\321\203\320\274\321\203 \320\264\320\276 \320\262\320\270\320\264\320\260\321\207\321\226</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class Cashing: public Ui_Cashing {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CASHING_H
