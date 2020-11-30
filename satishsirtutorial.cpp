#include <iostream>
using namespace std;
class parent
{public:
    virtual void message()=0;
};
class son1:public parent
{public:
    void message()
    {
        cout<<"this is first class"<<endl;
    }
};

class son2:public son1
{public:
    void delievery()
    {
        cout<<"this is second class"<<endl;
    }
};
int main()
{
  son1 obj;
  obj.message();
  son2 obj2;
  obj2.delievery();

  return 0;
}
