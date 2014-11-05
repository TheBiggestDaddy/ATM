/********************************************************************************
** Form generated from reading UI file 'Information.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFORMATION_H
#define UI_INFORMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_Information
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *balance;
    QLineEdit *issue_date;
    QLineEdit *end_date;

    void setupUi(QFrame *Information)
    {
        if (Information->objectName().isEmpty())
            Information->setObjectName(QStringLiteral("Information"));
        Information->resize(660, 420);
        Information->setStyleSheet(QStringLiteral("background-color: rgb(147, 199, 255)"));
        Information->setFrameShape(QFrame::StyledPanel);
        Information->setFrameShadow(QFrame::Raised);
        label = new QLabel(Information);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 30, 661, 61));
        label->setTextFormat(Qt::AutoText);
        label_2 = new QLabel(Information);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 140, 331, 61));
        label_2->setTextFormat(Qt::AutoText);
        label_3 = new QLabel(Information);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, 200, 331, 61));
        label_3->setTextFormat(Qt::AutoText);
        label_4 = new QLabel(Information);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(0, 260, 331, 61));
        label_4->setTextFormat(Qt::AutoText);
        balance = new QLineEdit(Information);
        balance->setObjectName(QStringLiteral("balance"));
        balance->setEnabled(false);
        balance->setGeometry(QRect(360, 160, 271, 31));
        balance->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255)"));
        issue_date = new QLineEdit(Information);
        issue_date->setObjectName(QStringLiteral("issue_date"));
        issue_date->setEnabled(false);
        issue_date->setGeometry(QRect(360, 220, 271, 31));
        issue_date->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255)"));
        end_date = new QLineEdit(Information);
        end_date->setObjectName(QStringLiteral("end_date"));
        end_date->setEnabled(false);
        end_date->setGeometry(QRect(360, 280, 271, 31));
        end_date->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255)"));

        retranslateUi(Information);

        QMetaObject::connectSlotsByName(Information);
    } // setupUi

    void retranslateUi(QFrame *Information)
    {
        Information->setWindowTitle(QApplication::translate("Information", "Frame", 0));
        label->setText(QApplication::translate("Information", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt;\">\320\206\320\275\321\204\320\276\321\200\320\274\320\260\321\206\321\226\321\217 \320\277\321\200\320\276 \320\272\320\260\321\200\321\202\320\272\321\203</span></p></body></html>", 0));
        label_2->setText(QApplication::translate("Information", "<html><head/><body><p align=\"right\"><span style=\" font-size:20pt;\">\320\221\320\260\320\273\320\260\320\275\321\201</span></p></body></html>", 0));
        label_3->setText(QApplication::translate("Information", "<html><head/><body><p align=\"right\"><span style=\" font-size:20pt;\">\320\224\320\260\321\202\320\260 \320\262\320\270\320\264\320\260\321\207\321\226</span></p></body></html>", 0));
        label_4->setText(QApplication::translate("Information", "<html><head/><body><p align=\"right\"><span style=\" font-size:20pt;\">\320\224\320\260\321\202\320\260 \320\267\320\260\320\272\321\226\320\275\321\207\320\265\320\275\320\275\321\217 \320\264\321\226\321\227 \320\272\320\260\321\200\321\202\320\272\320\270</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class Information: public Ui_Information {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFORMATION_H
