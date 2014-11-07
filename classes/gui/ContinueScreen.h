#ifndef CONTINUESCREEN_H
#define CONTINUESCREEN_H

#include <QFrame>
#include <QLineEdit>
namespace Ui {
class ContinueScreen;
}

class ContinueScreen : public QFrame
{
    Q_OBJECT

public:
    explicit ContinueScreen(QWidget *parent = 0);
    ~ContinueScreen();
    QLineEdit* getPinLine();
private:
    Ui::ContinueScreen *ui;
};

#endif // CONTINUESCREEN_H
