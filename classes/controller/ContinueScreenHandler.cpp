/**********************
 * Dobrianskiy Andriy *
 * ****08.11.2014**** *
 * ********************/
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
    ContinueScreen* screen = static_cast<ContinueScreen*>(_master.getCurrentFrame());


    if(_master.confirmPassword(screen->getPinLine()->text()))
    {
        _master.openWindow(Windows::ChooseAction);
    }
    else
    {
        _master.openWindow(Windows::LoginScreen);
    }
}
