#include<iostream>
using namespace std;
//creating a function that throws an exception
void throwException()
{
try
{
cout<<"\nFunction throwException throws an exception";
//the function throws an exception
throw exception();
}
//this catch block catches the exception
catch(exception &)
{
cout<<"\nException handled in function";
//here the exception is rethrown
throw;
}
}
int main()
{
try
{
cout<<"\nmain invokes function throwException";
throwException();
cout<<"unreachable";
}
//this catch block catches the exception thrown from the function
catch(exception &)
{
cout<<"\nException handled in main";
}

cout<<"\nProgram continues after main";
}
