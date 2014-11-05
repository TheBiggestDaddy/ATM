/********************************************************************************
** Form generated from reading UI file 'SendMoneyToAnotherCard.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDMONEYTOANOTHERCARD_H
#define UI_SENDMONEYTOANOTHERCARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_SendMoneyToAnotherCard
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *card_number_line;
    QLineEdit *sum_to_transfer;
    QLabel *label_3;

    void setupUi(QFrame *SendMoneyToAnotherCard)
    {
        if (SendMoneyToAnotherCard->objectName().isEmpty())
            SendMoneyToAnotherCard->setObjectName(QStringLiteral("SendMoneyToAnotherCard"));
        SendMoneyToAnotherCard->resize(660, 420);
        SendMoneyToAnotherCard->setAutoFillBackground(false);
        SendMoneyToAnotherCard->setStyleSheet(QStringLiteral("background-color: rgb(147, 199, 255)"));
        SendMoneyToAnotherCard->setFrameShape(QFrame::StyledPanel);
        SendMoneyToAnotherCard->setFrameShadow(QFrame::Raised);
        label = new QLabel(SendMoneyToAnotherCard);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 180, 241, 51));
        label->setTextFormat(Qt::AutoText);
        label_2 = new QLabel(SendMoneyToAnotherCard);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 250, 301, 51));
        label_2->setTextFormat(Qt::AutoText);
        card_number_line = new QLineEdit(SendMoneyToAnotherCard);
        card_number_line->setObjectName(QStringLiteral("card_number_line"));
        card_number_line->setEnabled(false);
        card_number_line->setGeometry(QRect(350, 190, 201, 31));
        QFont font;
        font.setPointSize(22);
        card_number_line->setFont(font);
        card_number_line->setAutoFillBackground(false);
        card_number_line->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255)"));
        card_number_line->setMaxLength(16);
        sum_to_transfer = new QLineEdit(SendMoneyToAnotherCard);
        sum_to_transfer->setObjectName(QStringLiteral("sum_to_transfer"));
        sum_to_transfer->setEnabled(false);
        sum_to_transfer->setGeometry(QRect(350, 260, 201, 31));
        sum_to_transfer->setFont(font);
        sum_to_transfer->setAutoFillBackground(false);
        sum_to_transfer->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255)"));
        sum_to_transfer->setMaxLength(16);
        label_3 = new QLabel(SendMoneyToAnotherCard);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, 20, 661, 51));
        label_3->setTextFormat(Qt::AutoText);

        retranslateUi(SendMoneyToAnotherCard);

        QMetaObject::connectSlotsByName(SendMoneyToAnotherCard);
    } // setupUi

    void retranslateUi(QFrame *SendMoneyToAnotherCard)
    {
        SendMoneyToAnotherCard->setWindowTitle(QApplication::translate("SendMoneyToAnotherCard", "Frame", 0));
        label->setText(QApplication::translate("SendMoneyToAnotherCard", "<html><head/><body><p><span style=\" font-size:18pt;\">\320\222\320\262\320\265\320\264\321\226\321\202\321\214 \320\275\320\276\320\274\320\265\321\200 \320\272\320\260\321\200\321\202\320\272\320\270</span></p></body></html>", 0));
        label_2->setText(QApplication::translate("SendMoneyToAnotherCard", "<html><head/><body><p><span style=\" font-size:18pt;\">\320\222\320\262\320\265\320\264\321\226\321\202\321\214 \321\201\321\203\320\274\321\203 \320\264\320\273\321\217 \320\277\320\265\321\200\320\265\320\272\320\260\320\267\321\203</span></p></body></html>", 0));
        card_number_line->setText(QString());
        sum_to_transfer->setText(QApplication::translate("SendMoneyToAnotherCard", "0", 0));
        label_3->setText(QApplication::translate("SendMoneyToAnotherCard", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">\320\237\320\265\321\200\320\265\320\272\320\260\320\267 \320\275\320\260 \321\226\320\275\321\210\321\203 \320\272\320\260\321\200\321\202\320\272\321\203</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class SendMoneyToAnotherCard: public Ui_SendMoneyToAnotherCard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDMONEYTOANOTHERCARD_H
