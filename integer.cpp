#include<iostream>
using namespace std;

int main()
{

    int num1, num2;
    cout<"Enter 1st number: ";
    cin>>num1;
    cout<<"Enter 2nd number: ";
    cin>>num2;
    if(num1>num2)
    {

        cout<<"First number "<< num1<<"is the largest";

    }
    else
    {

        cout<<"Second number "<<num2<<"is the largest";
    }
    return 0;
}
