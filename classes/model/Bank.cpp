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
    for(int i=0;i<_accounts.size();++i)
        delete _accounts[i];
    for(int i=0;i<_customers.size();++i)
        delete _customers[i];
};

void Bank::fillCustomers()
{
    for(int i=1;i<6;++i)
    {
        ifstream usersFile ("customers/"+to_string(i)+".txt");
        if (usersFile.is_open())
        {
            string line;
            QString name = "";
            QString surname = "";
            QString address = "";

            getline(usersFile,line);
            name.append(line.c_str());
            name.replace(0,3,"");

            getline(usersFile,line);
            surname.append(line.c_str());
            surname.replace(0,3,"");

            getline(usersFile,line);
            address.append(line.c_str());
            address.replace(0,3,"");

            _customers.push_back(new Customer(name.toStdString(), surname.toStdString(), address.toStdString()));

            usersFile.close();
        }
        else cout << "Unable to open file";
    }
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
    ifstream usersFile ("accounts/"+login.toStdString()+pass.toStdString()+".txt");
    if (usersFile.is_open())
    {
        QString type = "";
        QString name = "";
        QString surname = "";
        QString address = "";
        QString money = "";

        getline(usersFile,line);
        type.append(line.c_str());
        type.replace(0,3,"");

        getline(usersFile,line);
        name.append(line.c_str());
        name.replace(0,3,"");

        getline(usersFile,line);
        surname.append(line.c_str());
        surname.replace(0,3,"");

        getline(usersFile,line);
        address.append(line.c_str());
        address.replace(0,3,"");

        getline(usersFile,line);
        money.append(line.c_str());
        money.replace(0,3,"");

        Customer* cus = &getCustomer(name.toStdString(), surname.toStdString(), address.toStdString());
        if(type == "D")
        {
            cus->addDebitAccount(login.toStdString(), pass.toStdString());
            int moneyAmount(atoi(money.toStdString().c_str()));
            cus->getDebitAccount().putMoney(moneyAmount);
            _accounts.push_back(&(cus->getDebitAccount()));
        }
        else if(type == "C")
        {
            QString gotMoney = "";
            getline(usersFile,line);
            gotMoney.append(line.c_str());
            gotMoney.replace(0,3,"");
            int limit(atoi(money.toStdString().c_str()));
            int getted(atoi(gotMoney.toStdString().c_str()));

            cus->addCreditAccount(limit, login.toStdString(), pass.toStdString());
            cus->getCreditAccount().getMoney(getted);

            _accounts.push_back(&(cus->getCreditAccount()));
        }
        usersFile.close();
    }
    else cout << "Unable to open file";
}

Customer& Bank::getCustomer(string name, string surname, string address)
{
    for(int i=0;i<_customers.size();++i)
        if(_customers[i]->name() == name
           && _customers[i]->surname() == surname
           && _customers[i]->address() == address)
            return *_customers[i];
};

void Bank::getAccountsFromFile(QMap<QString, QString> &usersMap)
{
    string line;
    ifstream usersFile ("Users.txt");
    if (usersFile.is_open())
    {
        QString login = "";
        QString pass = "";
        while (getline(usersFile,line))
        {
            login.append(line.c_str());
            getline(usersFile,line);
            pass.append(line.c_str());
            getline(usersFile,line);

            login.replace(0,3,"");
            pass.replace(0,3,"");

            usersMap.insert(login, pass);
            login = "";
            pass = "";
        }
        usersFile.close();
    }
    else cout << "Unable to open file";
};

bool Bank::isValidAccount(QString login, QString password) const
{
    for(int i=0;i<_accounts.size();++i)
        if(_accounts[i]->getLogin() == login.toStdString()
                && _accounts[i]->getPassword() == password.toStdString())
            return true;
    return false;
};

Account& Bank::getAccount(string login, string  password) const
{
    for(int i=0;i<_accounts.size();++i)
        if(_accounts[i]->getLogin() == login
                && _accounts[i]->getPassword() == password)
            return *(_accounts[i]);
};

bool Bank::accountExist(string login) const
{
    for(int i=0;i<_accounts.size();++i)
        if(_accounts[i]->getLogin() == login)
            return true;
    return false;
}

Account& Bank::getAccountForTransaction(string login) const
{
    for(int i=0;i<_accounts.size();++i)
        if(_accounts[i]->getLogin() == login)
            return *(_accounts[i]);
};

bool Bank::makeTransaction(Account& from, const string& to, int quantity) const
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
    for(int i=0;i<_customers.size();++i)
        cout<<"Customer: "<<i<<": "<<_customers[i]->name()<<" "<<
              _customers[i]->surname()<<" "<<_customers[i]->address()<<endl;
    cout<<"------------"<<endl;
    cout<<"ACCOUNTS: "<<endl;
    for(int i=0;i<_accounts.size();++i)
        cout<<"Account: "<<i<<": "<<_accounts[i]->checkBalance()<<endl;
}
