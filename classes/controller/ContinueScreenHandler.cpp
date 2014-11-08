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
    if(isNumber(screen->getPinLine()->text().toStdString()))
    {
        _master.openWindow(Windows::ChooseAction);
    }
    else
    {
        _master.openWindow(Windows::LoginScreen);
    }
}
