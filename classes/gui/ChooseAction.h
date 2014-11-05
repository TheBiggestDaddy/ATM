#ifndef CHOOSEACTION_H
#define CHOOSEACTION_H

#include <QFrame>

namespace Ui {
class ChooseAction;
}

class ChooseAction : public QFrame
{
    Q_OBJECT

public:
    explicit ChooseAction(QWidget *parent = 0);
    ~ChooseAction();

private:
    Ui::ChooseAction *ui;
};

#endif // CHOOSEACTION_H
