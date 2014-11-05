/********************************************************************************
** Form generated from reading UI file 'LoginScreen.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINSCREEN_H
#define UI_LOGINSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_LoginScreen
{
public:
    QLineEdit *card_number_line;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *card_number_line_2;

    void setupUi(QFrame *LoginScreen)
    {
        if (LoginScreen->objectName().isEmpty())
            LoginScreen->setObjectName(QStringLiteral("LoginScreen"));
        LoginScreen->resize(660, 420);
#ifndef QT_NO_ACCESSIBILITY
        LoginScreen->setAccessibleName(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
        LoginScreen->setStyleSheet(QStringLiteral("background-color: rgb(147, 199, 255)"));
        LoginScreen->setFrameShape(QFrame::StyledPanel);
        LoginScreen->setFrameShadow(QFrame::Raised);
        card_number_line = new QLineEdit(LoginScreen);
        card_number_line->setObjectName(QStringLiteral("card_number_line"));
        card_number_line->setEnabled(false);
        card_number_line->setGeometry(QRect(340, 130, 201, 31));
        QFont font;
        font.setPointSize(22);
        card_number_line->setFont(font);
        card_number_line->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255)"));
        card_number_line->setMaxLength(16);
        label = new QLabel(LoginScreen);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 130, 321, 31));
        label->setFont(font);
        label_2 = new QLabel(LoginScreen);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 200, 321, 31));
        label_2->setFont(font);
        card_number_line_2 = new QLineEdit(LoginScreen);
        card_number_line_2->setObjectName(QStringLiteral("card_number_line_2"));
        card_number_line_2->setEnabled(false);
        card_number_line_2->setGeometry(QRect(340, 200, 81, 31));
        card_number_line_2->setFont(font);
        card_number_line_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255)"));
        card_number_line_2->setMaxLength(4);
        card_number_line_2->setEchoMode(QLineEdit::Password);
        card_number_line_2->setClearButtonEnabled(false);

        retranslateUi(LoginScreen);

        QMetaObject::connectSlotsByName(LoginScreen);
    } // setupUi

    void retranslateUi(QFrame *LoginScreen)
    {
        LoginScreen->setWindowTitle(QApplication::translate("LoginScreen", "Frame", 0));
        card_number_line->setText(QString());
        label->setText(QApplication::translate("LoginScreen", "<html><head/><body><p align=\"right\">Card number:</p></body></html>", 0));
        label_2->setText(QApplication::translate("LoginScreen", "<html><head/><body><p align=\"right\">Pin:</p></body></html>", 0));
#ifndef QT_NO_ACCESSIBILITY
        card_number_line_2->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        card_number_line_2->setAccessibleDescription(QString());
#endif // QT_NO_ACCESSIBILITY
        card_number_line_2->setText(QString());
        card_number_line_2->setPlaceholderText(QString());
    } // retranslateUi

};

namespace Ui {
    class LoginScreen: public Ui_LoginScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINSCREEN_H
