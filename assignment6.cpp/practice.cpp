#include<iostream>
using namespace std;

class Employee
{
    private:
    int id;
    double salary;

    public:
    Employee()
    {
        cout<<"Inside Employee constructor"<<endl;
    }
    Employee(int id,double salary)
    {
        cout<<"Inside Employee double salary";
    }

    void setId(int)
    {
        this->id=id;
    }

    int getId()
    {
        return id;
    }

    void setSalary(double)
    {
        this->salary=salary;
    }
    double getSalary()
    {
        return salary;
    }
  virtual void accept()
    {
        cout<<"Enter employee salary:"<<endl;
        cin>>salary;
        cout<<"Enter employee id:"<<endl;
        cin>>id;
    }

   virtual void display()
    {
        cout<<"Emp salary is:"<<salary<<" Emp ID is:"<<id<<endl;

    }
 
};

class Manager :virtual public Employee
{
    private:
    double bonus;

    protected:
    void acceptManager()
    {
        cout<<"Enter the Bonus"<<endl;
        cin>>bonus;
    }
    void displayManager()
    {
        cout<<"Manager Bonus is"<<bonus<<endl;
    }

    public:
    
    Manager()
    {
        cout<<"Inside Manager constructor"<<endl;
    }
    Manager(int id,double salary,double bonus)
    {
        cout<<"Inside Manager parameterized constructor";
    }

    void setBonus(double)
    {
        this->bonus=bonus;
    }
    double getBonus()
    {
        return bonus;
    }
    void accept()
    {
        Employee::accept();
        acceptManager();
    }
    void display()
    {
        Employee::display();
        displayManager();
    }
    ~Manager()
    {
        cout<<"~Manager()"<<endl;
    }
};

class Salesman:virtual public Employee
{
    private:
    double commission;

    protected:
    void acceptSalesman()
    {
        cout<<"Enter the Commision"<<endl;
        cin>>commission;
    }
    void displaySalesman()
    {
        cout<<"Salesman commision is"<<commission<<endl;
    }

    public:
    
    Salesman()
    {
        cout<<"Inside Salesman constructor"<<endl;
    }
    Salesman(double commision)
    {
        cout<<"Inside salesman parameterized constructor";
    }

    void setCommision(double)
    {
        this->commission=commission;
    }
    double getCommision()
    {
        return commission;
    }
    void accept()
    {
        Employee::accept();
        acceptSalesman();
    }
    void display()
    {
        Employee::display();
        displaySalesman();
    }

    ~Salesman()
    {
        cout<<"~Salesman()"<<endl;
    }

};

class SalesManager:public Manager,public Salesman
{
    public:
    SalesManager()
    {
        cout<<"Inside SalesManager constructor"<<endl;
    }
    SalesManager(int,double,double,double)
    {
        cout<<"Inside salesmanager parameterized";
    }
    ~SalesManager()
    {
        cout<<"~Salesmanager"<<endl;
    }

    void accept()
    {
        Employee::accept();
        acceptManager();
        acceptSalesman();
    }

    void display()
    {
        Employee::display();
        displayManager();
        displaySalesman();
    }

};
int main()
{
    // Employee obj;
    // Manager obj;
    // Salesman obj;
    SalesManager obj;
    obj.accept();
    obj.display();
    
    return 0;
}