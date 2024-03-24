/*Q3. Write a menu driven program for Student in CPP language. Create a class student with data 
members roll no, name and marks. Implement the following functions
void initStudent();
void printStudentOnConsole();
void acceptStudentFromConsole();

#include<iostream>
using namespace std;

class Student
{
    int rollno;
    string name;
    double marks;

public:
void initStudent()
{
    rollno=1;
    name="Pratik";
    marks=80;
}
void printStudentOnConsole()
{
    cout<<"Rollno-"<<rollno<<" "<<"Name:"<<name<<" "<<"Marks:"<<marks<<endl;
}
void acceptStudentFromConsole()
{
    cout<<"Enter rollno,name,marks:";
    cin>>rollno>>name>>marks;
}
};

int main()
{
    Student s;
    s.initStudent();
    s.acceptStudentFromConsole();
    s.printStudentOnConsole();
    return 0;
}*/

/*Write a menu driven program for Student in CPP language. Create a class student with data
members roll no, name and marks. Implement the following functions
void initStudent();
void printStudentOnConsole();
void acceptStudentFromConsole();

#include<iostream>
using namespace std;

class Student
{
    int rollno;
    string name;
    double marks;

    public:
    void initStudent()
    {
        rollno=83570;
        name="Pratik";
        marks=80;
    }
    
    void acceptStudentFromConsole()
    {
        cout<<"Enter rollno,name and marks:"<<endl;
        cin>>rollno>>name>>marks;
    }

    void printStudentOnConsole()
    {
        cout<<"rollno: "<<rollno<<" name: "<<name<<" Marks: "<<marks<<endl;
    }
};

int main()
{
    Student s;
    int choice;
   
    do
    {
   
    cout<<"0.EXIT"<<endl;
    cout<<"1.Initialise Student"<<endl;
    cout<<"2.Accept Student"<<endl;
    cout<<"3.Display Student"<<endl;
    cout<<"Enter your choice: "<<endl;
    cin>>choice;
   
    switch (choice)
    {
    case 0:
        cout<<"Thank You for exploring";
        break;
    case 1:
        s.initStudent();
        break;
    case 2:
        s.acceptStudentFromConsole();
        break;
    case 3:
        s.printStudentOnConsole();
        break;            
    
    default:
        break;
    }
    }while(choice!=0);
}*/
/*Write a menu driven program to calculate volume of the box(length * width * height).
Provide parameterless, parameterized(with 3 parameters) and single paramaterized constructor.
Create the local objects in respective case and call the function to caluclate area.
Menu options ->
1. Calculate Volume with default values
2. Calculate Volume with length,breadth and height with same value
3. Calculate Volume with different length,breadth and height values.*/

#include<iostream>
using namespace std;

class Box
{
    
};


