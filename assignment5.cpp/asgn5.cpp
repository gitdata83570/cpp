/*Q1. Implement following classes. Test all functionalities in main().
Create a class Date with data memebrs day,month and year.
Cretae a class Person with data members name,address and birthdate. The birthdate shoud be of
type date.
Cretae a class Employee with data members id, sal, dept and joining date. The joining date should
be of type date.*/

#include<iostream>
using namespace std;

class Date
{
    int day;
    int month;
    int year;

    public:
    Date()
    {
        day = 0;
        month = 0;
        year = 0;
    }

    void acceptDate()
    {
      cout<<"Enter day : "<<endl;
      cin>>day;
      cout<<"Enter month : "<<endl;
      cin>>month;
      cout<<"Enter year : "<<endl;
      cin>>year;

    }

    void displayDate()
    {
     cout<<"The date is :"<<day<<"-"<<month<<"-"<<year<<endl;   

    }

};


class Person
{
string name;
string address;
Date birthdate; //composition

public:

Person()
{
    string name = " ";
    string address = " ";
    
}

void acceptPerson()
{
    cout<<"Enter person name :"<<endl;
    cin>>name;

    cout<<"Enter address :"<<endl;
    cin>>address;

    birthdate.acceptDate();   //date class function
}

void displayPerson()
{
    cout<<"The person name is :"<<name<<endl;
    cout<<"The address is : "<<address<<endl;

    birthdate.displayDate(); 
}

};


class Employee
{
    int id;
    int sal; 
    string dept;
    Date joi;   //composition

    public:
    Employee()
    {
        id = 0;
        sal = 0;
        dept = " ";
    }

    void acceptEmployee()
    {
        cout<<"Enter employee id"<<endl;
        cin>>id;
        cout<<"Enter sal"<<endl;
        cin>>sal;
        cout<<"Enter dept"<<endl;
        cin>>dept;

        joi.acceptDate(); // date function

    }


    void displayEmployee()
    {
        cout<<"The employee id is :"<<id<<endl;
        cout<<"The employee sal is :"<<sal<<endl;
        cout<<"The employee dept is :"<<dept<<endl;
        
        joi.displayDate();   //date functions


    }

};



int main()
{
    Person p1;
    Employee e1;
     p1.acceptPerson();
     e1.acceptEmployee();
    
    p1.displayPerson();
    e1.displayEmployee();

    return 0;
}
