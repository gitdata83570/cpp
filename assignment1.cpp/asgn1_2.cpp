/*Q2. Write a menu driven program for Date in a CPP language using structure and also using class.
Date is having data members day, month, year. Implement the following functions.
void initDate();
void printDateOnConsole();
void acceptDateFromConsole();
bool isLeapYear();*/

#include<iostream>
using namespace std;

void initDate(struct Date p1);
void printDateOnConsole(struct Date p1);
void acceptDateOnConsole(struct Date p1);
struct Date
{
private:

    int day,month,year;

public:
void initDate()
{
    day=1;
    month=12;
    year=1000;
    
}   
void printDateOnConsole()
{
    cout<<"day="<<day<<" month="<<month<<" year="<<year;

}
void acceptDateOnConsole()
{
    cin>>day>>month>>year;
}
bool isLeapYear()
{
    if((year%4==0 && year%100 !=0)||(year%400==0))
     return true;

    else
        return false; 
}
};

int main()
{
    struct Date d1;
    int choice;
    do{
    cout<<"\n\n0.Thank you for exploring\n  "<<endl;
    cout<<"1.Initial Date\n"<<endl;
    cout<<"2.Accept Date\n"<<endl;
    cout<<"3.Display Date\n"<<endl;
    cout<<"4.Check for leap year\n"<<endl;
    cout<<"Enter your choice: \n"<<endl;
    cin>>choice;

    switch (choice)
    {
    case 0:                                                   /* constant-expression */
        cout<<"Thank you for exploring";
        break;

    case 1:
        d1.initDate();
        break;
    case 2:

       d1.acceptDateOnConsole(); 
        break;
    case 3:
        d1.printDateOnConsole();
        break;            
    case 4:
        if(d1.isLeapYear())
        cout<<"This is Leap year";
         else
        cout<<"Not a leap year";
        
        break;

    default:
        break;
    }

    }while(choice!=0);

    return 0;
}