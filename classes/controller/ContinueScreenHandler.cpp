#include "ContinueScreenHandler.h"

#include "../gui/ContinueScreen.h"
ContinueScreenHandler::ContinueScreenHandler(Controller& master):
    _master(master)
{
}

ContinueScreenHandler::~ContinueScreenHandler ()
{

}
void ContinueScreenHandler::backspaceClicked ()
{
    _master.openWindow(Windows::LoginScreen);
}

void ContinueScreenHandler::okClicked()
{
    ContinueScreen* screen = static_cast<ContinueScreen*>(_master._current_frame);

    _master._password = screen->getPinLine()->text();

    if(isNumber(_master._login.toStdString()) &&
            isNumber(_master._password.toStdString())&&
            _master.isValidAccount())
    {
        if(_master._current_account != nullptr)
        {
            delete _master._current_account;
        }
        _master._current_account = new ATM(_master._UKROP_BANK,_master._login.toStdString(),
                                           _master._password.toStdString());
        _master.openWindow(Windows::ChooseAction);
    }
    else
    {
        _master.openWindow(Windows::LoginScreen);
    }
}
