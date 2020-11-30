#include<iostream>
using namespace std;
void function3()
{
cout<<"\nInside function 3";
throw runtime_error("runtime error in function 3");
}
void function2()
{
cout<<"\nCalling function 3 for f2";
function3();
cout<<"\nback to f2";

}
void function1()
{
cout<<"\nCalling function 2 from f1";
function2();
cout<<"\nback to f1";

}
int main()
{
try
{
function1();
}
catch(runtime_error &e)
{
//e.what() prints the error message that we have sent as an argument
cout<<"\nException occurred: "<<e.what()<<endl;
cout<<"Exception handled in main";
}
}//good programme
