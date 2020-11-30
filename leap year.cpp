#include<iostream>
using namespace std;
int main()
{

int i;
cout<<"plz enter the year";
cin>>i;
if(i%4==0&&i%100!=0&&i%400==0)
{
cout<<"its a leap year";
}
else
{
cout<<"this year is not the leap year";
}
}
