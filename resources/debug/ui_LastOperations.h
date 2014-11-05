/********************************************************************************
** Form generated from reading UI file 'LastOperations.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LASTOPERATIONS_H
#define UI_LASTOPERATIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_LastOperations
{
public:
    QLabel *label;
    QLabel *operation_1;
    QLabel *operation_2;
    QLabel *operation_3;
    QLabel *operation_4;
    QLabel *operation_5;

    void setupUi(QFrame *LastOperations)
    {
        if (LastOperations->objectName().isEmpty())
            LastOperations->setObjectName(QStringLiteral("LastOperations"));
        LastOperations->resize(660, 420);
        LastOperations->setStyleSheet(QStringLiteral("background-color: rgb(147, 199, 255)"));
        LastOperations->setFrameShape(QFrame::StyledPanel);
        LastOperations->setFrameShadow(QFrame::Raised);
        label = new QLabel(LastOperations);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 661, 61));
        label->setTextFormat(Qt::AutoText);
        operation_1 = new QLabel(LastOperations);
        operation_1->setObjectName(QStringLiteral("operation_1"));
        operation_1->setGeometry(QRect(0, 90, 661, 61));
        operation_1->setTextFormat(Qt::AutoText);
        operation_2 = new QLabel(LastOperations);
        operation_2->setObjectName(QStringLiteral("operation_2"));
        operation_2->setGeometry(QRect(0, 140, 661, 61));
        operation_2->setTextFormat(Qt::AutoText);
        operation_3 = new QLabel(LastOperations);
        operation_3->setObjectName(QStringLiteral("operation_3"));
        operation_3->setGeometry(QRect(0, 190, 661, 61));
        operation_3->setTextFormat(Qt::AutoText);
        operation_4 = new QLabel(LastOperations);
        operation_4->setObjectName(QStringLiteral("operation_4"));
        operation_4->setGeometry(QRect(0, 240, 661, 61));
        operation_4->setTextFormat(Qt::AutoText);
        operation_5 = new QLabel(LastOperations);
        operation_5->setObjectName(QStringLiteral("operation_5"));
        operation_5->setGeometry(QRect(0, 290, 661, 61));
        operation_5->setTextFormat(Qt::AutoText);

        retranslateUi(LastOperations);

        QMetaObject::connectSlotsByName(LastOperations);
    } // setupUi

    void retranslateUi(QFrame *LastOperations)
    {
        LastOperations->setWindowTitle(QApplication::translate("LastOperations", "Frame", 0));
        label->setText(QApplication::translate("LastOperations", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt;\">\320\236\321\201\321\202\320\260\320\275\320\275\321\226 \320\276\320\277\320\265\321\200\320\260\321\206\321\226\321\227</span></p></body></html>", 0));
        operation_1->setText(QApplication::translate("LastOperations", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">\320\236\320\277\320\265\321\200\320\260\321\206\321\226\321\217 1</span></p></body></html>", 0));
        operation_2->setText(QApplication::translate("LastOperations", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">\320\236\320\277\320\265\321\200\320\260\321\206\321\226\321\217 2</span></p></body></html>", 0));
        operation_3->setText(QApplication::translate("LastOperations", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">\320\236\320\277\320\265\321\200\320\260\321\206\321\226\321\217 3</span></p></body></html>", 0));
        operation_4->setText(QApplication::translate("LastOperations", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">\320\236\320\277\320\265\321\200\320\260\321\206\321\226\321\217 4</span></p></body></html>", 0));
        operation_5->setText(QApplication::translate("LastOperations", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">\320\236\320\277\320\265\321\200\320\260\321\206\321\226\321\217 5</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class LastOperations: public Ui_LastOperations {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LASTOPERATIONS_H
