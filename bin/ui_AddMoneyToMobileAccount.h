/********************************************************************************
** Form generated from reading UI file 'AddMoneyToMobileAccount.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDMONEYTOMOBILEACCOUNT_H
#define UI_ADDMONEYTOMOBILEACCOUNT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_AddMoneyToMobileAccount
{
public:
    QLineEdit *sum_to_transfer;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *card_number_line;

    void setupUi(QFrame *AddMoneyToMobileAccount)
    {
        if (AddMoneyToMobileAccount->objectName().isEmpty())
            AddMoneyToMobileAccount->setObjectName(QStringLiteral("AddMoneyToMobileAccount"));
        AddMoneyToMobileAccount->resize(660, 420);
        AddMoneyToMobileAccount->setStyleSheet(QStringLiteral("background-color: rgb(147, 199, 255)"));
        AddMoneyToMobileAccount->setFrameShape(QFrame::StyledPanel);
        AddMoneyToMobileAccount->setFrameShadow(QFrame::Raised);
        sum_to_transfer = new QLineEdit(AddMoneyToMobileAccount);
        sum_to_transfer->setObjectName(QStringLiteral("sum_to_transfer"));
        sum_to_transfer->setEnabled(false);
        sum_to_transfer->setGeometry(QRect(350, 260, 201, 31));
        QFont font;
        font.setPointSize(22);
        sum_to_transfer->setFont(font);
        sum_to_transfer->setAutoFillBackground(false);
        sum_to_transfer->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255)"));
        sum_to_transfer->setMaxLength(16);
        label = new QLabel(AddMoneyToMobileAccount);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 180, 331, 51));
        label->setTextFormat(Qt::AutoText);
        label_2 = new QLabel(AddMoneyToMobileAccount);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 250, 301, 51));
        label_2->setTextFormat(Qt::AutoText);
        label_3 = new QLabel(AddMoneyToMobileAccount);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, 50, 661, 51));
        label_3->setTextFormat(Qt::AutoText);
        card_number_line = new QLineEdit(AddMoneyToMobileAccount);
        card_number_line->setObjectName(QStringLiteral("card_number_line"));
        card_number_line->setEnabled(false);
        card_number_line->setGeometry(QRect(350, 190, 201, 31));
        card_number_line->setFont(font);
        card_number_line->setAutoFillBackground(false);
        card_number_line->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255)"));
        card_number_line->setMaxLength(16);

        retranslateUi(AddMoneyToMobileAccount);

        QMetaObject::connectSlotsByName(AddMoneyToMobileAccount);
    } // setupUi

    void retranslateUi(QFrame *AddMoneyToMobileAccount)
    {
        AddMoneyToMobileAccount->setWindowTitle(QApplication::translate("AddMoneyToMobileAccount", "Frame", 0));
        sum_to_transfer->setText(QApplication::translate("AddMoneyToMobileAccount", "0", 0));
        label->setText(QApplication::translate("AddMoneyToMobileAccount", "<html><head/><body><p align=\"right\"><span style=\" font-size:18pt;\">\320\222\320\262\320\265\320\264\321\226\321\202\321\214 \320\275\320\276\320\274\320\265\321\200 \320\274\320\276\320\261\321\226\320\273\321\214\320\275\320\276\320\263\320\276</span></p></body></html>", 0));
        label_2->setText(QApplication::translate("AddMoneyToMobileAccount", "<html><head/><body><p align=\"right\"><span style=\" font-size:18pt;\">\320\222\320\262\320\265\320\264\321\226\321\202\321\214 \321\201\321\203\320\274\321\203</span></p></body></html>", 0));
        label_3->setText(QApplication::translate("AddMoneyToMobileAccount", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt;\">\320\237\320\276\320\277\320\276\320\262\320\275\320\265\320\275\320\275\321\217 \320\274\320\276\320\261\321\226\320\273\321\214\320\275\320\276\320\263\320\276 \321\200\320\260\321\205\321\203\320\275\320\272\321\203</span></p></body></html>", 0));
        card_number_line->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AddMoneyToMobileAccount: public Ui_AddMoneyToMobileAccount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDMONEYTOMOBILEACCOUNT_H
