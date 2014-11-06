#ifndef SENDMONEYTOANOTHERCARD_H
#define SENDMONEYTOANOTHERCARD_H

#include "ScreenHandler.h"

#include "../Controller.h"

class SendMoneyToAnotherCard:public ScreenHandler
{
public:
    SendMoneyToAnotherCard(class Controller& master);

private:
    Controller& _master;
};

#endif // SENDMONEYTOANOTHERCARD_H
