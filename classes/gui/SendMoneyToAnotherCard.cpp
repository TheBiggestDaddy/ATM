#include "SendMoneyToAnotherCard.h"
#include "ui_SendMoneyToAnotherCard.h"

SendMoneyToAnotherCard::SendMoneyToAnotherCard(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::SendMoneyToAnotherCard)
{
    ui->setupUi(this);
}

SendMoneyToAnotherCard::~SendMoneyToAnotherCard()
{
    delete ui;
}
