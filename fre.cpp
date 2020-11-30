#include<iostream>
using namespace std;
int main()
{
int a,i,x,reverse=0;
cout<<"enter a";
cin>>a;
cout<<"reverse of the no is"<<endl;
for(i=a;i>0;i=i/10)
{
x=i%10;
reverse=reverse*10+x;
}
cout<<reverse;
}
