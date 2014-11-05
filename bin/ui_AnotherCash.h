/********************************************************************************
** Form generated from reading UI file 'AnotherCash.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANOTHERCASH_H
#define UI_ANOTHERCASH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AnotherCash
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QWidget *widget;
    QLabel *label_2;

    void setupUi(QFrame *AnotherCash)
    {
        if (AnotherCash->objectName().isEmpty())
            AnotherCash->setObjectName(QStringLiteral("AnotherCash"));
        AnotherCash->setEnabled(true);
        AnotherCash->resize(660, 420);
        AnotherCash->setStyleSheet(QStringLiteral("background-color: rgb(147, 199, 255)"));
        AnotherCash->setFrameShape(QFrame::StyledPanel);
        AnotherCash->setFrameShadow(QFrame::Raised);
        label = new QLabel(AnotherCash);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 70, 151, 51));
        label->setTextFormat(Qt::AutoText);
        lineEdit = new QLineEdit(AnotherCash);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setEnabled(false);
        lineEdit->setGeometry(QRect(310, 80, 271, 31));
        lineEdit->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255)"));
        widget = new QWidget(AnotherCash);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(350, 150, 291, 201));
        widget->setStyleSheet(QStringLiteral("border-image: url(../resources/keyboard.png)"));
        label_2 = new QLabel(AnotherCash);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 160, 331, 201));
        label_2->setTextFormat(Qt::AutoText);

        retranslateUi(AnotherCash);

        QMetaObject::connectSlotsByName(AnotherCash);
    } // setupUi

    void retranslateUi(QFrame *AnotherCash)
    {
        AnotherCash->setWindowTitle(QApplication::translate("AnotherCash", "Frame", 0));
        label->setText(QApplication::translate("AnotherCash", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">\320\222\320\262\320\265\320\264\321\226\321\202\321\214 \321\201\321\203\320\274\321\203</span></p></body></html>", 0));
        label_2->setText(QApplication::translate("AnotherCash", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">\320\222\320\270\320\272\320\276\321\200\320\270\321\201\321\202\320\276\320\262\321\203\320\271\321\202\320\265 \320\272\320\273\320\260\320\262\321\226\320\260\321\202\321\203\321\200\321\203 </span></p><p align=\"center\"><span style=\" font-size:18pt;\">\320\275\320\270\320\266\321\207\320\265.</span></p><p align=\"center\"><br/></p><p align=\"center\"><span style=\" font-size:18pt;\">\320\224\320\273\321\217 \320\277\321\226\320\264\321\202\320\262\320\265\321\200\320\264\320\266\320\265\320\275\320\275\321\217 \320\275\320\260\321\202\320\270\321\201\320\275\321\226\321\202\321\214 </span></p><p align=\"center\"><span style=\" font-size:18pt;\">&quot;OK&quot;</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class AnotherCash: public Ui_AnotherCash {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANOTHERCASH_H
