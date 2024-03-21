//Q1. Write a menu driven program for Date in a C. Declare a structure Date having data members
//day, month, year. Implement the following functions.

#include<stdio.h>
void initDate(struct Date* ptrDate);    //function declaration
void printDateOnConsole(struct Date* ptrDate);  //function declaration
void acceptDateFromConsole(struct Date* ptrDate);   //function declaration

struct Date         
{
    int day,month,year;         //data members
};

    void initDate(struct Date* ptrDate)         //member functions
    {
         ptrDate->day=1;
         ptrDate->month=1;
         ptrDate->year=1000;
    }

    void printDateOnConsole(struct Date* ptrDate)   //member functions
    {
        printf("Day-%d",ptrDate->day);
        printf("Month-%d ",ptrDate->month);
        printf("year-%d ",ptrDate->year);
    }

    void acceptDateFromConsole(struct Date* ptrDate)        //member functions
    {
        
        scanf("%d%d%d",&ptrDate->day,&ptrDate->month,&ptrDate->year);
    }


int main()      //program execution starts from main
{
    struct Date d1;  //Object of struct date

    int choice;
        
    do
    {
        
        printf("\n0.EXIT\n");
        printf("1.initialize date: \n");
        printf("2.Accept Date: \n");
        printf("3.Display Date: \n");
        printf("Enter your choie: \n");
        scanf("\n%d",&choice);

        switch(choice)
        {
            case 0:
                printf("Thank You for exploring");
                break;
            case 1:
                  initDate(&d1);  
                  break;
            
            case 2:
                acceptDateFromConsole(&d1);
                break;
              
            case 3:

                  printDateOnConsole(&d1);
                  break;

                  
        }

    }while(choice!=0);

    return 0;
}