#include "SendMoneyToAnotherCard.h"
#include "ui_SendMoneyToAnotherCard.h"

#include <QTimer>

SendMoneyToAnotherCard::SendMoneyToAnotherCard(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::SendMoneyToAnotherCard)
{
    ui->setupUi(this);
    QTimer::singleShot(0, ui->card_number_line, SLOT(setFocus()));
    ui->error->setVisible(false);
}

SendMoneyToAnotherCard::~SendMoneyToAnotherCard()
{
    delete ui;
}

QLineEdit* SendMoneyToAnotherCard::getSummToTransferLine()
{
    return ui->sum_to_transfer;
}
QLineEdit* SendMoneyToAnotherCard::getCardNumberLine()
{
    return ui->card_number_line;
}

void SendMoneyToAnotherCard::setErrorStatus(bool status)
{
    ui->error->setVisible(status);
}
