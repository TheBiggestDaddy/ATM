#ifndef ANOTHERCASH_H
#define ANOTHERCASH_H

#include <QFrame>
#include <QLineEdit>

namespace Ui {
class AnotherCash;
}

class AnotherCash : public QFrame
{
    Q_OBJECT

public:
    explicit AnotherCash(QWidget *parent = 0);
    ~AnotherCash();

    QLineEdit* getSummLine();
    void setErrorStatus(const bool status);
private:
    Ui::AnotherCash *ui;
};

#endif // ANOTHERCASH_H
