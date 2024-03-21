/*1. Create a class circle with data members radius and PI. MAke the PI as constant and initialize it on
class level. Cretae object of circle take the input for radius and calculate the area*/
#include<iostream>
using namespace std;

class Circle
{
    int radius;
    const double PI=3.14;

    public:
    void getradius()
    {
        cout<<"Enter the radius:";
        cin>>radius;
    }
    void area()
    {
        double a;
        a=2*PI*radius*radius;
        cout<<"area of circle is:"<<a<<endl;
    }
};

int main()
{
   double radius;
   Circle c;
   c.getradius();
   c.area();

   
   return 0;
}