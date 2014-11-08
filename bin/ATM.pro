#-------------------------------------------------
#
# Project created by QtCreator 2014-10-05T21:13:11
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ATM
TEMPLATE = app

HEADERS += \
    ../classes/Controller.h \
    ../classes/gui/AddMoneyToMobileAccount.h \
    ../classes/gui/AnotherCash.h \
    ../classes/gui/Cashing.h \
    ../classes/gui/ChooseAction.h \
    ../classes/gui/Information.h \
    ../classes/gui/LastOperations.h \
    ../classes/gui/LoginScreen.h \
    ../classes/gui/MainWindow.h \
    ../classes/gui/SendMoneyToAnotherCard.h \
    ../classes/gui/Windows.h \
    ../classes/model/ATM.h \
    ../classes/model/Bank.h \
    ../classes/model/CreditAccount.h \
    ../classes/model/Customer.h \
    ../classes/model/Date.h \
    ../classes/model/DebitAccount.h \
    ../classes/model/Account.h

SOURCES += \
    ../classes/Controller.cpp \
    ../classes/main.cpp \
    ../classes/gui/AddMoneyToMobileAccount.cpp \
    ../classes/gui/AnotherCash.cpp \
    ../classes/gui/Cashing.cpp \
    ../classes/gui/ChooseAction.cpp \
    ../classes/gui/Information.cpp \
    ../classes/gui/LastOperations.cpp \
    ../classes/gui/LoginScreen.cpp \
    ../classes/gui/MainWindow.cpp \
    ../classes/gui/SendMoneyToAnotherCard.cpp \
    ../classes/model/Bank.cpp \
    ../classes/model/Date.cpp \
    ../classes/model/MainForKutsyk.cpp \
    ../classes/model/DebitAccount.cpp \
    ../classes/model/CreditAccount.cpp \
    ../classes/model/Customer.cpp \
    ../classes/model/ATM.cpp

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
