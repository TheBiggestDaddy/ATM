#include "SendMoneyToAnotherCardHandler.h"

#include "../gui/SendMoneyToAnotherCard.h"

#include<QTimer>

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



void SendMoneyToAnotherCardHandler::left3clicked ()
{
    SendMoneyToAnotherCard* screen = static_cast<SendMoneyToAnotherCard*>(_master._current_frame);
    QTimer::singleShot(0, screen->getCardNumberLine(), SLOT(setFocus()));
}
void SendMoneyToAnotherCardHandler::left2clicked ()
{
    SendMoneyToAnotherCard* screen = static_cast<SendMoneyToAnotherCard*>(_master._current_frame);
    QTimer::singleShot(0, screen->getSummToTransferLine(), SLOT(setFocus()));
}

void SendMoneyToAnotherCardHandler::right3clicked ()
{
    SendMoneyToAnotherCard* screen = static_cast<SendMoneyToAnotherCard*>(_master._current_frame);
    QTimer::singleShot(0, screen->getCardNumberLine(), SLOT(setFocus()));
}

void SendMoneyToAnotherCardHandler::right2clicked ()
{
    SendMoneyToAnotherCard* screen = static_cast<SendMoneyToAnotherCard*>(_master._current_frame);
    QTimer::singleShot(0, screen->getSummToTransferLine(), SLOT(setFocus()));
}

void SendMoneyToAnotherCardHandler::okClicked ()
{
    SendMoneyToAnotherCard* screen = static_cast<SendMoneyToAnotherCard*>(_master._current_frame);
    if(isNumber(screen->getCardNumberLine()->text().toStdString()) &&
            isNumber(screen->getSummToTransferLine()->text().toStdString()))
    {
        _master.openWindow(Windows::Success);
    }
    else
    {
        screen->setErrorStatus(true);
    }
}
