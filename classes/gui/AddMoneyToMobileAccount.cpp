#include "AddMoneyToMobileAccount.h"
#include "ui_AddMoneyToMobileAccount.h"

AddMoneyToMobileAccount::AddMoneyToMobileAccount(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::AddMoneyToMobileAccount)
{
    ui->setupUi(this);
}

AddMoneyToMobileAccount::~AddMoneyToMobileAccount()
{
    delete ui;
}
