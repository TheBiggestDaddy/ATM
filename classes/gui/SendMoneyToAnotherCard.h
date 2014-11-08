#ifndef SENDMONEYTOANOTHERCARD_H
#define SENDMONEYTOANOTHERCARD_H

#include <QFrame>
#include <QLineEdit>

namespace Ui {
class SendMoneyToAnotherCard;
}

class SendMoneyToAnotherCard : public QFrame
{
    Q_OBJECT

public:
    explicit SendMoneyToAnotherCard(QWidget *parent = 0);
    ~SendMoneyToAnotherCard();
    QLineEdit* getSummToTransferLine();
    QLineEdit* getCardNumberLine();
    void setErrorStatus(bool status);
private:
    Ui::SendMoneyToAnotherCard *ui;
};

#endif // SENDMONEYTOANOTHERCARD_H
