#ifndef ADDMONEYTOMOBILEACCOUNT_H
#define ADDMONEYTOMOBILEACCOUNT_H

#include <QFrame>
#include <QLineEdit>

namespace Ui {
class AddMoneyToMobileAccount;
}

class AddMoneyToMobileAccount : public QFrame
{
    Q_OBJECT

public:
    explicit AddMoneyToMobileAccount(QWidget *parent = 0);
    ~AddMoneyToMobileAccount();
    QLineEdit* getMobileNumberLine();
    QLineEdit* getSummToTrunsferLine();
    void setErrorStatus(bool status);

private:
    Ui::AddMoneyToMobileAccount *ui;
};

#endif // ADDMONEYTOMOBILEACCOUNT_H
