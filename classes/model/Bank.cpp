#include "Bank.h"
#include <iostream>
#include <fstream>
#include <string>
#include <QMap>
#include <QString>

using namespace std;

Bank::Bank()
    :_accounts( 0),
    _customers(0)
{
    fillCustomers();
    fillAccounts();
};

Bank::~Bank()
{
    for(size_t i=0;i<_customers.size();++i)
        delete _customers[i];
};

void Bank::fillCustomers()
{
    _customers.push_back(new Customer("Customer", "Reach", "New York"));
    _customers.push_back(new Customer("a", "a", "a"));
    _customers.push_back(new Customer("b", "b", "b"));
    _customers.push_back(new Customer("c", "c", "c"));
    _customers.push_back(new Customer("d", "d", "d"));
};

void Bank::fillAccounts()
{
    QMap<QString, QString> usersMap;
    getAccountsFromFile(usersMap);
    for(QMap<QString, QString>::iterator it = usersMap.begin();it!=usersMap.end();it++)
        getAccountData(it.key(), it.value());
}

void Bank::getAccountData(QString login, QString pass)
{
    string line;
    Customer* cus = &getCustomer("Customer", "Reach", "New York");
    cus->addDebitAccount(login.toStdString(), pass.toStdString());
    size_t moneyAmount(100500);
    cus->getDebitAccount().putMoney(moneyAmount);
    _accounts.push_back(&(cus->getDebitAccount()));

    size_t limit(10000);
    size_t getted(1000);

    cus->addCreditAccount(limit, login.toStdString(), pass.toStdString());
    cus->getCreditAccount().getMoney(getted);

    _accounts.push_back(&(cus->getCreditAccount()));
};

Customer& Bank::getCustomer(string name, string surname, string address)
{
    for(size_t i=0;i<_customers.size();++i)
        if(_customers[i]->name() == name
           && _customers[i]->surname() == surname
           && _customers[i]->address() == address)
            return *_customers[i];
    throw new BadAccount("Customer doesn't exist");
};

void Bank::getAccountsFromFile(QMap<QString, QString> &usersMap)
{
    usersMap.insert("123456789", "1234");
    usersMap.insert("987654321", "4321");
};

bool Bank::isValidAccount(QString login, QString password) const
{
    for(size_t i=0;i<_accounts.size();++i)
        if(_accounts[i]->getLogin() == login.toStdString()
                && _accounts[i]->getPassword() == password.toStdString())
            return true;
    return false;
};

Account& Bank::getAccount(string login, string  password) const
{
    for(size_t i=0;i<_accounts.size();++i)
        if(_accounts[i]->getLogin() == login
                && _accounts[i]->getPassword() == password)
            return *(_accounts[i]);
    throw new BadAccount("Account doesn't exist");
};

bool Bank::accountExist(string login) const
{
    for(size_t i=0;i<_accounts.size();++i)
        if(_accounts[i]->getLogin() == login)
            return true;
    return false;
}

Account& Bank::getAccountForTransaction(string login) const
{
    for(size_t i=0;i<_accounts.size();++i)
        if(_accounts[i]->getLogin() == login)
            return *(_accounts[i]);
    throw new BadAccount("Account doesn't exist");
};

bool Bank::makeTransaction(Account& from, const string& to, size_t quantity) const
{
    if(!accountExist(to))
        return false;

    if(from.getMoney(quantity))
    {
        getAccountForTransaction(to).putMoney(quantity);
        return true;
    }
    return false;
};

void Bank::show() const
{
    cout<<"CUSTOMERS: "<<endl;
    for(size_t i=0;i<_customers.size();++i)
        cout<<"Customer: "<<i<<": "<<_customers[i]->name()<<" "<<
              _customers[i]->surname()<<" "<<_customers[i]->address()<<endl;
    cout<<"------------"<<endl;
    cout<<"ACCOUNTS: "<<endl;
    for(size_t i=0;i<_accounts.size();++i)
        cout<<"Account: "<<i<<": "<<_accounts[i]->checkBalance()<<endl;
}
