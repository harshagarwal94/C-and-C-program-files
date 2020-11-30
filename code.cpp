
#include<iostream>
#include<vector>
using namespace std;

int main()
{
vector<int> a;
for(int i=0;i<9;i++)
{
a.push_back(i+1);
}
cout<<"value at 0: "<<a.at(0);
cout<<"Size: "<<a.size();
cout<<"Capacity: "<<a.capacity();
}
