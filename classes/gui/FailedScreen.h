#ifndef FAILEDSCREEN_H
#define FAILEDSCREEN_H

#include <QFrame>

namespace Ui {
class FailedScreen;
}

class FailedScreen : public QFrame
{
    Q_OBJECT

public:
    explicit FailedScreen(QWidget *parent = 0);
    ~FailedScreen();

private:
    Ui::FailedScreen *ui;
};

#endif // FAILEDSCREEN_H
