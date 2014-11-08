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
    QString card_to_recieve = screen->getCardNumberLine()->text();
    QString amount = screen->getSummToTransferLine()->text();
    if(isNumber(card_to_recieve.toStdString()) &&
            isNumber(amount.toStdString()))
    {
        if(_master._current_account->sendToAccount(card_to_recieve.toStdString(),
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
