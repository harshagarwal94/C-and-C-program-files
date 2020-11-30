#include<iostream>
using namespace std;
int main()
{
try
{throw 6;}
catch(int a)
{cout<<"exception occured"<<endl;
cout<<"exception no is"<<a<<endl;}

return 0;
}
