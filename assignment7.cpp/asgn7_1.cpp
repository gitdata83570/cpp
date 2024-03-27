/*Q1. Provide menu driven code for the functionalities:

1. Accept Employee
2. Display the count of all employees with respect to designation
3. Display All Managers
4. Display All Salesman
5. Display All SalesManagers*/


#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    double salary;

public:
    Employee()
    {

    }
    Employee(int id, double salary)
    {
        cout << "Inside Employee(int,double)" << endl;
    }
    virtual void accept()
    {
        cout << "Enter the empid - ";
        cin >> id;
        cout << "Enter the salary - ";
        cin >> salary;
    }
    virtual void display()
    {
        cout << "Id - " << id << endl;
        cout << "Salary - " << salary << endl;
    }
    virtual ~Employee()
    {
        cout << "~Employee()" << endl;
    }
};

class Manager : virtual public Employee
{
private:
    double bonus;

protected:
    void acceptManager()
    {
        cout << "Enter the bonus - ";
        cin >> bonus;
    }
    void displayManager()
    {
        cout << "Bonus - " << bonus << endl;
    }

public:
    Manager()
    {
      
    }
    Manager(int id, double salary, double bonus)
    {
        cout << "Inside Manager(int,double,double)" << endl;
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
        cout << "~Manager()" << endl;
    }
};

class Salesman : virtual public Employee
{
private:
    double commission;

protected:
    void acceptSalesman()
    {
        cout << "Enter the Commission - ";
        cin >> commission;
    }
    void displaySalesman()
    {
        cout << "Commission - " << commission << endl;
    }

public:
    Salesman()
    {

    }
    Salesman(int id, double salary, double commission)
    {
        cout << "Inside Salesman(int,double,double)" << endl;
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
        cout << "~Salesman()" << endl;
    }
};
class SalesManager : public Manager, public Salesman
{
public:
    SalesManager()
    {

    }
    SalesManager(int id, double salary, double bonus, double commission)
    {
        cout << "Inside SalesManager(int,double,double,double)" << endl;
    }
    ~SalesManager()
    {
        cout << "~Salesmanager()" << endl;
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
    Employee *e[5];
    int choice;
    int m=0;
    int s=0;
    int sm=0;
    int index=0;


    do
    {

    cout<<"0. EXIT   1.ACCEPT EMPLOYEE  2. Display the count of all employees with respect to designation   3. Display All Managers  4. Display All Salesman   5. Display All SalesManagers"<<endl;
    cout<<"enter choice : ";
    cin>>choice;
    cout<<endl;

    switch (choice)
        {
        case 0:
            cout<<"thanks for using"<<endl;
            break;

        case 1:
        {
        
              {   
                  char d;

                  do
                  
                  {
                    
                  cout<<"enter the new choice --> A. Accept Manager  B.Accept Salesman  C.Accept Salesmanager  E.EXIT"<<endl;
                  cout<<"Enter your choice : ";
                  cin>>d;
                  cout<<endl;
                      switch(d)           
                            {
                                
                              case 'A':
                              case 'a':
                                {
                                    if(index<5)
                                      {
                                        e[index]=new Manager();
                                        e[index]->accept();
                                        index++;
                                      }    
                                         else
                                        {
                                            cout<<"array is full"<<endl;
                                        }                   
                                }
                                    
                                break;

                            case 'B':
                            case 'b':
                               {
                                      if(index<5)
                                      {
                                        e[index]=new Salesman();
                                        e[index]->accept();
                                        index++;
                                      }
                                        else
                                        {
                                            cout<<"array is full"<<endl;
                                        }
                                }
                                
                                break;

                            case 'C':
                            case 'c':
                                {
                                       if(index<5)
                                       {
                                        e[index]=new SalesManager();
                                        e[index]->accept();
                                        index++;
                                       }    
                                        else
                                        {
                                            cout<<"array is full"<<endl;
                                        }
                                }
                                
                                break;



                            case 'E':
                            case 'e':
                                 cout<<"thanks"<<endl;
                            break;



                            default:
                                cout<<"enter a valid choice"<<endl;
                             break;

                            }
                 }while(d !='E');    
              }

           
        }
                   break;
              
        case 2:
        {
            for (int i = 0; i < index; i++)
           {
                  if(typeid(*e[i]).name()==typeid(Manager).name())
                  {
                    m++;
                  }
                 else if(typeid(*e[i]).name()==typeid(Salesman).name())
                  {
                    s++;
                  }
                 else if(typeid(*e[i]).name()==typeid(SalesManager).name())
                  {
                    sm++;
                  }
            }
         cout<<"number of managers :        "<<m<<endl;
         cout<<"number of salesman :        "<<s<<endl;
         cout<<"number of salesmanager :    "<<sm<<endl;

         cout<<"total number of employees : "<<m+s+sm<<endl;
        }   
            break;
         
    //6. Display All Managers  7. Display All Salesman   8. Display All SalesManagers
       
        case 3:
            {
            
            cout<<"*****************************************************"<<endl;

            cout<<"         Information about Managers      "<<endl;
            
             int count=0;

             for (int i = 0; i < index; i++)
                 {
                  if(typeid(*e[i])==typeid(Manager))
                  {
                     e[i]->display();
                     count++;
                     cout<<"***************************************"<<endl;
                  }
                 }

                if (count==0)
                {
                    cout<<".................THERE ARE NO MANAGERS IN THE COMPANY........................"<<endl;
                }
                
            }
            break;

        case 4:
            {

            cout<<"*****************************************************"<<endl;

            cout<<"         Information about Salesman      "<<endl;

            int count=0;

             for (int i = 0; i < index; i++)
                 {
                  if(typeid(*e[i])==typeid(Salesman))
                  {
                     e[i]->display();
                     count++;
                     cout<<"***************************************"<<endl;
                  }
                 }

                if (count==0)
                {
                    cout<<"................THERE ARE NO SALESMAN IN THE COMPANY..........................."<<endl;
                }
            }
            break;

        case 5:
        {
            cout<<"*****************************************************"<<endl;

            cout<<"         Information about Salesmanagers      "<<endl;

            int count=0;
             for (int i = 0; i < index; i++)
                 {
                  if(typeid(*e[i])==typeid(SalesManager))
                  {
                     e[i]->display();
                     count++;
                 
                     cout<<"***************************************"<<endl;
                  }
                 }
                
                if (count==0)
                {
                    cout<<".................THERE ARE NO SALESMANAGERS IN THE COMPANY....................."<<endl;
                }
         }
            
            break;        
        


        default:

           cout<<"Enter a valid choice"<<endl;
        
            break;
        }
    } while (choice!=0);
        for(int i=0;i<index;i++)
        delete e[i];
    
    return 0;
}