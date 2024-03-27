/*Q1. Create a class Date with data memebrs day,month and year.
Cretae a class Person with data members name,address and birthdate. The birthdate shoud be of
type Date.
Cretae a class Employee with data members id, sal, dept and joining date. The joining date should
be of type date.
Employee class should be inherited from Person.
Implement following classes. Test all functionalities in main().
(Note - Perform the Association and Inheritance in the above case.)*/

#include<iostream>
using namespace std;

class Date
{
    int day,month,year;

    public:
    void acceptDate()
    {
        cout<<"Enter day,month,year: "<<endl;
        cin>>day>>month>>year;
    }
    void displayDate()
    {
        cout<<"Day-"<<day<<" Month-"<<month<<" Year-"<<year<<endl;
    }
};

class Person
{   

    string name;
    string address;
    Date birthdate;
    public:
    virtual void acceptData()
    {
        cout<<"Enter name,address,birthdate of Person:"<<endl;
        cin>>name>>address;
        birthdate.acceptDate();
    }
   virtual void displayData()
    {
        cout<<"Name:"<<name<<" Address:"<<address<<" Birthdate: "<<endl;
        birthdate.displayDate();
    }
};

class Employee:public Person
{
    int empid;
    string dept;
    double salary;
    Date doj;
    public:
    void acceptData()
    {
        cout<<"Enter empid,dept,salary and doj"<<endl;
        cin>>empid>>dept>>salary;
        doj.acceptDate();
    }
    void displayData()
    {
        cout<<"Empid:"<<empid<<" Department:"<<dept<<" Salary:"<<salary<<endl;
        doj.displayDate();
    }

};

int main()
{
    // Person p;
    // p.acceptData();
    // p.displayData();
    
    // Employee e;
    // e.acceptData();
    // e.displayData();

    Person *ptr=new Employee();
    ptr->acceptData();
    ptr->displayData();


    return 0;
}