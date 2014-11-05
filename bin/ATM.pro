#-------------------------------------------------
#
# Project created by QtCreator 2014-10-05T21:13:11
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ATM
TEMPLATE = app

FORMS += \
    ../classes/gui/aChooseAction.ui \
    ../classes/gui/AddMoneyToMobileAccount.ui \
    ../classes/gui/AnotherCash.ui \
    ../classes/gui/Cashing.ui \
    ../classes/gui/ChooseAction.ui \
    ../classes/gui/Information.ui \
    ../classes/gui/LastOperations.ui \
    ../classes/gui/LoginScreen.ui \
    ../classes/gui/MainWindow.ui \
    ../classes/gui/SendMoneyToAnotherCard.ui

HEADERS += \
    ../classes/headers/Account.h \
    ../classes/gui/AddMoneyToMobileAccount.h \
    ../classes/gui/AnotherCash.h \
    ../classes/headers/ATM.h \
    ../classes/headers/ATMTransanction.h \
    ../classes/headers/Bank.h \
    ../classes/gui/Cashing.h \
    ../classes/gui/ChooseAction.h \
    ../classes/headers/CreditAccount.h \
    ../classes/headers/Customer.h \
    ../classes/headers/Date.h \
    ../classes/headers/DebitAccount.h \
    ../classes/gui/Information.h \
    ../classes/gui/LastOperations.h \
    ../classes/gui/LoginScreen.h \
    ../classes/gui/MainWindow.h \
    ../classes/gui/SendMoneyToAnotherCard.h

SOURCES += \
    ../classes/gui/AddMoneyToMobileAccount.cpp \
    ../classes/gui/AnotherCash.cpp \
    ../classes/gui/Cashing.cpp \
    ../classes/gui/ChooseAction.cpp \
    ../classes/gui/Date.cpp \
    ../classes/gui/Information.cpp \
    ../classes/gui/LastOperations.cpp \
    ../classes/gui/LoginScreen.cpp \
    ../classes/gui/main.cpp \
    ../classes/gui/MainWindow.cpp \
    ../classes/gui/SendMoneyToAnotherCard.cpp
