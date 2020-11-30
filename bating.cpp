#include<iostream>
#include<string>
using namespace std;
class batsman
{
   private:
   int bcode,innings,notout,runs,batavg;
   string bname;

public:
void readdata()
{
    cout<<"welcome to ICC and now give me some data you want to access from me";
    cout<<"plz enter the  4 digit batsman code";
    cin>>bcode;
    cout<<"plz enter the no of innings";
    cin>>innings;
    cout<<"plz enter the name of the batsman";
    cin>>bname;
    cout<<"now enter the no of notout";
    cin>>notout;
    cout<<"plz enter the no of run";
    cin>>runs;
}
void  calcavg()
{
    batavg=runs/=innings-notout;

}
void displaydata()
{
 cout<<" the no of innings is"<<innings;
 cout<<"4 digit batsman code is"<<bcode;
 cout<<"the name of the batsman"<<bname;
 cout<<"the no of run is"<<runs;
 cout<<"and the avg of the batsman is"<<batavg;
}

};
int main()
{
    batsman obj;
    obj.readdata();
    obj.calcavg();
    obj.displaydata();

}
