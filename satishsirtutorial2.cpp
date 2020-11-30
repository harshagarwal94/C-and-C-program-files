#include<iostream>
using namespace std;
class Bank
{
public:
    virtual void getbalance()=0;
};

class Bank1:public Bank
{
public:
    void getbalance()
    {

        cout<<"Bank A has the account balance of $100"<<endl;

    }
};

class Bank2:public Bank
{
public:
    void getbalance()
    {

        cout<<"Bank B has the account balance of $150"<<endl;

    }
};

class Bank3:public Bank
{
public:
    void getbalance()
    {

        cout<<"Bank C has the account balance of $200"<<endl;

    }
};
int main()
{
    Bank1 obj;
    obj.getbalance();
    Bank2 obj2;
    obj2.getbalance();
    Bank3 obj3;
    obj3.getbalance();
    return 0;
}
