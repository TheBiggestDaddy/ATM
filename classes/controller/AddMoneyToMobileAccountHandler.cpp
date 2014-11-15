#include "AddMoneyToMobileAccountHandler.h"

#include <iostream>
#include <QTimer>
/**********************
 * Dobrianskiy Andriy *
 * ****08.11.2014**** *
 * ********************/
class AddMoneyToMobileAccount;

AddMoneyToMobileAccountHandler::AddMoneyToMobileAccountHandler(Controller &master):
    _master(master)
{

}

AddMoneyToMobileAccountHandler::~AddMoneyToMobileAccountHandler ()
{

}

void AddMoneyToMobileAccountHandler::backspaceClicked ()
{
    _master.openWindow(Windows::ChooseAction);
}

//return true, if "string" start with "what"
bool startWith (const QString& string, const QString& what)
{
    if(string.length() < what.length())
    {
        return false;
    }

    for(size_t i = 0; i < what.length(); i++)
    {
        if(string[i] != what[i])
        {
            return false;
        }
    }
    return true;
}

void AddMoneyToMobileAccountHandler::okClicked ()
{
    std::cout << "AddMoneyToMobileAccount halndler: ok clicked" << std::endl;
    AddMoneyToMobileAccount* screen = static_cast<AddMoneyToMobileAccount*>(_master.getCurrentFrame());
    QString mobile_number = screen->getMobileNumberLine()->text();
    QString amount = screen->getSummToTrunsferLine()->text();
    if(isNumber(mobile_number.toStdString()) &&
            isNumber(amount.toStdString()) &&
            ((mobile_number.length() == 10 && startWith(mobile_number,"0") ||

              (mobile_number.length() == 12 && startWith(mobile_number,"380"))))
            )
    {
        if(_master._current_account->sendToPhone(mobile_number.toStdString(),
                                                 Controller::convertToInt(amount.toStdString())))
        {
            _master.openWindow(Windows::Success);
        }
        else
        {
            _master.openWindow(Windows::Failed);
        }
    }
    else
    {
        screen->setErrorStatus(true);
    }
}

void AddMoneyToMobileAccountHandler::left3clicked ()
{
    AddMoneyToMobileAccount* screen = static_cast<AddMoneyToMobileAccount*>(_master._current_frame);
    QTimer::singleShot(0, screen->getMobileNumberLine(), SLOT(setFocus()));
}
void AddMoneyToMobileAccountHandler::left2clicked ()
{
    AddMoneyToMobileAccount* screen = static_cast<AddMoneyToMobileAccount*>(_master._current_frame);
    QTimer::singleShot(0, screen->getSummToTrunsferLine(), SLOT(setFocus()));
}

void AddMoneyToMobileAccountHandler::right3clicked ()
{
    AddMoneyToMobileAccount* screen = static_cast<AddMoneyToMobileAccount*>(_master._current_frame);
    QTimer::singleShot(0, screen->getMobileNumberLine(), SLOT(setFocus()));
}

void AddMoneyToMobileAccountHandler::right2clicked ()
{
    AddMoneyToMobileAccount* screen = static_cast<AddMoneyToMobileAccount*>(_master._current_frame);
    QTimer::singleShot(0, screen->getSummToTrunsferLine(), SLOT(setFocus()));
}

