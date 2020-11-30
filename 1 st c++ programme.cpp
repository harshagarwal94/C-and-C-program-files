#include<iostream>
using namespace std;
class test
{
   private:
       int a;
       double b;
   public:
       int getdata()
       {
           return b;
       }

};
int main()
{
    test t1;
    t1.getdata();
    cout<<t1.getdata();
    return 0;
}
