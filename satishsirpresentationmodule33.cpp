#include<iostream>
using namespace std;
class base
{public:
 fun(int a,int b)
{int add;
add=a+b;
cout<<add;}
};
class derived:public base
{public:
fun(int a,int b)
{int mul;
mul=a*b;
cout<<mul;}
};
int main()
{base b;
b.fun(4,5);
derived a;
a.fun(3,5);

return 0;}
