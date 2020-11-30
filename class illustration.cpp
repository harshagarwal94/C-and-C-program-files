#include<iostream>
using namespace std;
class one
{
private:
int a;
public:
one(){a=1;}
friend class two;
};
class two
{
private: int b;
public: void display(one&one)
{cout<<"value of a"<<one.a;
}
};
int main()
{
one one;
two t;
t.display(one);
}
