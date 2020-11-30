#include<iostream>
using namespace std;
class base
{
public:

    void sum(int a)
    {

        cout<<"this term is integer and the no you chose is"<<a<<endl;
    }
    void sum(double a)
    {

        cout<<"this term is float and the no you chose is"<<a;
    }
};
int main()
{
    base t1;
    t1.sum(10);
    t1.sum(5.34);
    return 0;
}
