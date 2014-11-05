#ifndef LOGINSCREEN_H
#define LOGINSCREEN_H

#include <QFrame>

namespace Ui {
class LoginScreen;
}

class LoginScreen : public QFrame
{
    Q_OBJECT

public:
    explicit LoginScreen(QWidget *parent = 0);
    ~LoginScreen();

private:
    Ui::LoginScreen *ui;
};

#endif // LOGINSCREEN_H
