/*Q1. Write a class to find volume of a Cylinder by using following members. (volume of
Cylinder=3.14 * radius * radius *height) ( use static wherever needed. hint-PI)
Class having following member functions:
Cylinder()
Cylinder(double radius, double height)
getRadius()
setRadius()
getHeight()
setHeight()
getVolume()
printVolume()
Initialize members using constructor member initializer list.
Optional – Use the Modular Apporach*/
#include<iostream>
using namespace std;

class Cylinder
{
    double radius,height,volume;
    static const double PI;     //static data member declaration

    public:

    Cylinder()          //constructor
    {
        radius=1;
        height=1;
        

    }

    Cylinder(double radius,double height)   //parameterised constructor
    {
        this->radius=radius;
        this->height=height;

    }

    double getRadius()
    {
        return radius;
    }
    double setRadius()
    {
        this->radius=2;
    }
    double getHeight()
    {
        return height;
    }
    double setHeight()
    {
        this->height=2;
    }
    double getVolume()
    {
        return volume;
    }
   double printVolume()
    {
        volume=PI * radius * radius *height;
        cout<<"volume of cylinder is:"<<volume<<endl;
    }
};const double Cylinder::PI=3.14;       //static data members initialized outside the class.

int main()
{
    Cylinder c1(2,2);
    c1.getRadius();
    c1.getHeight();
    c1.getVolume();
    c1.setRadius();
    c1.setHeight();
    c1.printVolume();

    return 0;
}