#include<iostream>
using namespace std;
class Animals
{
    public:
    virtual void cats()=0;
    virtual void dogs()=0;

};
class Cats:public Animals
{
public:
    void cats()
    {
    cout<<"cats meow"<<endl;
    }
};
class Dogs:public Animals
{
public:
    void dogs()
    {
    cout<<"dogs bark"<<endl;
    }
};
int main()
         {
           Animals a;
           a.cats();
           a.dogs();
           return 0;
        }
