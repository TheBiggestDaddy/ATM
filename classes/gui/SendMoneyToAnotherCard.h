#ifndef SENDMONEYTOANOTHERCARD_H
#define SENDMONEYTOANOTHERCARD_H

#include <QFrame>

namespace Ui {
class SendMoneyToAnotherCard;
}

class SendMoneyToAnotherCard : public QFrame
{
    Q_OBJECT

public:
    explicit SendMoneyToAnotherCard(QWidget *parent = 0);
    ~SendMoneyToAnotherCard();

private:
    Ui::SendMoneyToAnotherCard *ui;
};

#endif // SENDMONEYTOANOTHERCARD_H
