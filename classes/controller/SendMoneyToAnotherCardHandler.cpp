#include "SendMoneyToAnotherCardHandler.h"

SendMoneyToAnotherCardHandler::SendMoneyToAnotherCardHandler(Controller &master):
    _master(master)
{
}

SendMoneyToAnotherCardHandler::~SendMoneyToAnotherCardHandler ()
{

}

void SendMoneyToAnotherCardHandler::backspaceClicked ()
{
    _master.openWindow(Windows::ChooseAction);
}
