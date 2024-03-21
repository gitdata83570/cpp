/*Q3. Write a menu driven program for Student in CPP language. Create a class student with data
members roll no, name and marks. Implement the following functions*/
#include<iostream>
using namespace std;
void initStudent();
void printStudentOnConsole();
void acceptStudentFromConsole();


class Student
{
    int rollno;
    string name;
    double marks;

    public:
    void initStudent()
    {
        rollno= 83570 ;
        name ="Pratik ";
        marks= 80.00 ;

    }
    void printStudentOnConsole()
    {
        cout<<" Roll no-"<<rollno<<" name"<<name<<" marks"<<marks;
    }
    void acceptStudentFromConsole()
    {
        cin>>rollno>>name>>marks;
    }

};


int main()
{
    int choice;
    Student s1;
    do{
    cout<<"0.Thank you for exploring\n"<<endl;
    cout<<"1.Initialise student\n"<<endl;
    cout<<"2.Display student\n"<<endl;
    cout<<"3.Accept Student\n"<<endl;
    cout<<"Enter your choice: \n"<<endl;
    cin>>choice;
    
    switch(choice)
    {
        case 0:
        cout<<"Thank you for exploring";
        break;

        case 1:
        s1.initStudent();
        break;

        case 2:
        s1.printStudentOnConsole();
        break;

        case 3:
        s1.acceptStudentFromConsole();
        break;

    }

    }while(choice!=0);
    return 0;
}