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
#include "Customer.h"
#include "ATMTransanction.h"

using namespace std;

class Bank
{
private:
    vector<Account*> _accounts;
    vector<Customer*> _customers;

    void fillAccounts();
    void getAccountsFromFile(QMap<QString, QString> &usersMap);
    void getAccountData(QString, QString);
    bool accountExist(string login) const;

    void fillCustomers();

    Bank(const Bank&);
    Bank& operator=(const Bank&);
    Customer& getCustomer(string, string, string);

public:
    Bank();
    ~Bank();

    bool isValidAccount(QString login, QString password) const;
    bool makeTransaction(Account&, const string& , int) const;

    Account& getAccount(string login, string  password) const;
    Account& getAccountForTransaction(string login) const;
    void show() const;
};
