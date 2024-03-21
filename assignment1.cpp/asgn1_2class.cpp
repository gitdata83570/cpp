/*Q2. Write a menu driven program for Date in a CPP language using structure and also using class.
Date is having data members day, month, year. Implement the following functions.
*/


#include<iostream>
using namespace std;
void initDate();
void printDateOnConsole();
void acceptDateFromConsole();
bool isLeapYear();
class Date
{
    private:
    int day,month,year;

    public:
    void initDate()
    {
        day=1;
        month=01;
        year=2000;
    }
    void printDateOnConsole()
    {
        cout<<"day:"<<day<<"month:"<<month<<"year:"<<year;
    }
    void acceptDateFromConsole()
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
    Date d1;

    int choice;
    do{
    cout<<"0.Thank you for visiting\n"<<endl;    
    cout<<"1.Initialise date\n"<<endl;
    cout<<"2.Display Date\n"<<endl;
    cout<<"3.Accept Date\n"<<endl;
    cout<<"4.isLeapYear\n"<<endl;
    cout<<"Enter your choice: "<<endl;
    cin>>choice;

    switch(choice)
    {
        case 0:
        cout<<"Exit from while loop";
        break;

        case 1:
        d1.initDate();
        break;

        case 2:
        d1.printDateOnConsole();
        break;

        case 3:
        d1.acceptDateFromConsole();
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