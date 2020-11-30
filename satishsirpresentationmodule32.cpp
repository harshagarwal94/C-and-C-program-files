#include<iostream>
using namespace std;
class base
{
public:
int a,b;
 base()
{
    a=10;b=11;
}
    void show()
    {

    cout<<a<<endl<<b<<endl<<"thanks"<<endl;
    }
    operator --()
    {
        ++a;
        ++b;
    }
};
int main()
{

    base t;
    t.show();
    --t;
    t.show();
}
