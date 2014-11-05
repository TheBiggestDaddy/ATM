#pragma once
/* 
 * @author
 * Kutsyk Vasyl
 * K.V.N.
 */
#pragma once
/*
 * @author
 * Kutsyk Vasyl
 * K.V.N.
 */
#include <iostream>
#include <vector>
#include <QString>
#include <QMap>
#include "Account.h"

using namespace std;

class Bank
{
private:
    static vector<Account> _acounts;

    Bank(const Bank&);
    Bank& operator=(const Bank&);

    void fillAccounts();
    void getAccountsFromFile(QMap<QString, QString> &usersMap);
    void getAccountData(QString, QString);

public:
    Bank();
    ~Bank();

    static bool isValidAccount(QString login, QString password);
};
