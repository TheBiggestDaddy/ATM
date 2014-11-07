#include "AddMoneyToMobileAccount.h"
#include "ui_AddMoneyToMobileAccount.h"
#include <QTimer>
AddMoneyToMobileAccount::AddMoneyToMobileAccount(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::AddMoneyToMobileAccount)
{
    ui->setupUi(this);
    ui->error->setVisible(false);

    QTimer::singleShot(0, ui->mobile_number_line, SLOT(setFocus()));
}

AddMoneyToMobileAccount::~AddMoneyToMobileAccount()
{
    delete ui;
}

QLineEdit* AddMoneyToMobileAccount::getMobileNumberLine()
{
    return ui->mobile_number_line;
}
QLineEdit* AddMoneyToMobileAccount::getSummToTrunsferLine()
{
    return ui->sum_to_transfer;
}
void AddMoneyToMobileAccount::setErrorStatus(bool status)
{
    ui->error->setVisible(status);
}
