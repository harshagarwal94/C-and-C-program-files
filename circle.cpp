#include<iostream>
using namespace std;
class circle
{
    int radius;
    double area,circumference;
public:
    circle()
    {
        radius=1;
    }
    setradius()
    {
        cout<<"please enter the radius of the circle"<<endl;
        cin>>radius;
    }
    calcdimentions()
    {
     circumference=2*3.14*radius;
     area=3.14*radius*radius;
    }
    display()
    {

    cout<<"the circumference of the circle is"<<circumference<<endl;
    cout<<"the area of the circle is"<<area<<endl;
    }
};
int main()
{
 circle c1,c2;
 c1.setradius();
 c1.calcdimentions();
 c1.display();
 c2.calcdimentions();
 c2.display();
 return 0;
}
