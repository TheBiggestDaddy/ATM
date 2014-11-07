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
    ../classes/model/Account.h \
    ../classes/model/ATM.h \
    ../classes/model/ATMTransanction.h \
    ../classes/model/Bank.h \
    ../classes/model/CreditAccount.h \
    ../classes/model/Customer.h \
    ../classes/model/Date.h \
    ../classes/model/DebitAccount.h \
    ../classes/controller/ScreenHandler.h \
    ../classes/controller/LoginScreenHandler.h \
    ../classes/controller/AddMoneyToMobileAccountHandler.h \
    ../classes/controller/AnotherCashHandler.h \
    ../classes/controller/CashingHandler.h \
    ../classes/controller/ChooseActionHandler.h \
    ../classes/controller/InformationHandler.h \
    ../classes/controller/LastOperationsHandler.h \
    ../classes/controller/SendMoneyToAnotherCardHandler.h \
    ../classes/gui/SuccessScreen.h \
    ../classes/controller/SuccessScreenHandler.h \
    ../classes/gui/FailedScreen.h \
    ../classes/controller/FailedScreenHandler.h

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
    ../classes/controller/ScreenHandler.cpp \
    ../classes/controller/LoginScreenHandler.cpp \
    ../classes/controller/AddMoneyToMobileAccountHandler.cpp \
    ../classes/controller/AnotherCashHandler.cpp \
    ../classes/controller/CashingHandler.cpp \
    ../classes/controller/ChooseActionHandler.cpp \
    ../classes/controller/InformationHandler.cpp \
    ../classes/controller/LastOperationsHandler.cpp \
    ../classes/controller/SendMoneyToAnotherCardHandler.cpp \
    ../classes/gui/SuccessScreen.cpp \
    ../classes/controller/SuccessScreenHandler.cpp \
    ../classes/gui/FailedScreen.cpp \
    ../classes/controller/FailedScreenHandler.cpp

FORMS += \
    ../classes/gui/AddMoneyToMobileAccount.ui \
    ../classes/gui/AnotherCash.ui \
    ../classes/gui/Cashing.ui \
    ../classes/gui/ChooseAction.ui \
    ../classes/gui/Information.ui \
    ../classes/gui/LastOperations.ui \
    ../classes/gui/LoginScreen.ui \
    ../classes/gui/MainWindow.ui \
    ../classes/gui/SendMoneyToAnotherCard.ui \
    ../classes/gui/SuccessScreen.ui \
    ../classes/gui/FailedScreen.ui
