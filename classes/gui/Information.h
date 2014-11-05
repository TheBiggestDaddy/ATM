#ifndef INFORMATION_H
#define INFORMATION_H

#include <QFrame>

namespace Ui {
class Information;
}

class Information : public QFrame
{
    Q_OBJECT

public:
    explicit Information(QWidget *parent = 0);
    ~Information();

private:
    Ui::Information *ui;
};

#endif // INFORMATION_H
