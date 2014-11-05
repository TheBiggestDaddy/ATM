#ifndef CASHING_H
#define CASHING_H

#include <QFrame>

namespace Ui {
class Cashing;
}

class Cashing : public QFrame
{
    Q_OBJECT

public:
    explicit Cashing(QWidget *parent = 0);
    ~Cashing();

private:
    Ui::Cashing *ui;
};

#endif // CASHING_H
