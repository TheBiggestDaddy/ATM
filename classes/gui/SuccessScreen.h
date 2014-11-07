#ifndef SUCCESSSCREEN_H
#define SUCCESSSCREEN_H

#include <QFrame>

namespace Ui {
class SuccessScreen;
}

class SuccessScreen : public QFrame
{
    Q_OBJECT

public:
    explicit SuccessScreen(QWidget *parent = 0);
    ~SuccessScreen();

private:
    Ui::SuccessScreen *ui;
};

#endif // SUCCESSSCREEN_H
