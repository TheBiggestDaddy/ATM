#include <iostream>
#include "Bank.h"
#include "ATM.h"

using namespace std;

int mainKutsyk()
{
    Bank b;
    b.show();
    cout<<"MAKE transaction from first to second: "<<endl;
    if(b.isValidAccount("123456789", "1234"))
    {
        ATM _atm(b,"123456789", "1234");
        cout<<"Left: "<<_atm.leftMoney()<<endl;

        cout<<"Send to phone: "<<boolalpha<<_atm.sendToPhone("911", 100)<<endl;
        cout<<"Left: "<<_atm.leftMoney()<<endl;

        cout<<"Send to account: "<<boolalpha<<_atm.sendToAccount("987654321", 100)<<endl;
        cout<<"Left: "<<_atm.leftMoney()<<endl;

        vector<string>::iterator it = _atm.getHistory().end();
        while (it != _atm.getHistory().begin())
        {
             --it;
            cout<<*it<<endl;

        }
    }
    cout<<"---------------------------"<<endl;
    b.show();
    return 0;
}
