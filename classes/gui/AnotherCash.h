#ifndef ANOTHERCASH_H
#define ANOTHERCASH_H

#include <QFrame>

namespace Ui {
class AnotherCash;
}

class AnotherCash : public QFrame
{
    Q_OBJECT

public:
    explicit AnotherCash(QWidget *parent = 0);
    ~AnotherCash();

private:
    Ui::AnotherCash *ui;
};

#endif // ANOTHERCASH_H
