#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"enter the values";
cin>>n;
switch(n%5==0)
  {
  case 1:
  cout<<"divisible";
  break;
  default:
  cout<<"not divisible";
  break;
  }
}
