#include<iostream>
using namespace std;

class Point
{
    int x,y;
   
    public:
    Point(int p,int q)
    {
        cout<<"numbers are"<<p<<q;
    }

};

int main()
{
    Point p(2,3);
    return 0;

}