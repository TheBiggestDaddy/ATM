#ifndef ADDMONEYTOMOBILEACCOUNT_H
#define ADDMONEYTOMOBILEACCOUNT_H

#include <QFrame>

namespace Ui {
class AddMoneyToMobileAccount;
}

class AddMoneyToMobileAccount : public QFrame
{
    Q_OBJECT

public:
    explicit AddMoneyToMobileAccount(QWidget *parent = 0);
    ~AddMoneyToMobileAccount();

private:
    Ui::AddMoneyToMobileAccount *ui;
};

#endif // ADDMONEYTOMOBILEACCOUNT_H
