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
    explicit Information(QWidget *parent = 0,const std::string& balance = std::string(),
                         const std::string& end_date = std::string(),
                         const std::string& issue_date = std::string());
    ~Information();

private:
    Ui::Information *ui;
};

#endif // INFORMATION_H
