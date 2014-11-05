#include "Bank.h"
#include <iostream>
#include <fstream>
#include <string>
#include <QMap>
#include <QString>

using namespace std;

Bank::Bank()
{
    fillAccounts();
};

Bank::~Bank()
{

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

        if(type == "D")
        {

        }
        else if(type == "C")
        {
            QString gotMoney = "";
            getline(usersFile,line);
            gotMoney.append(line.c_str());
            gotMoney.replace(0,3,"");
        }

        usersFile.close();
    }
    else cout << "Unable to open file";
}



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
}

bool Bank::isValidAccount(QString login, QString password)
{
    return false;
}
