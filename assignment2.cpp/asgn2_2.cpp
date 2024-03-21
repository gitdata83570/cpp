/*Q2. Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a fifty-cent toll.
Mostly they do, but sometimes a car goes by without paying.
The tollbooth keeps track of the number of cars that have gone by and of the total amount of money
collected. Model this tollbooth with a class called tollbooth.
The two data items are a type unsigned int to hold the total number of cars, and a type double to
hold the total amount of money collected.
A constructor initializes all data members to 0. A member function called payingCar() increments
the car total and adds 0.50 to the cash total. An other function, called nopayCar()
increments the car total but adds nothing to the cash total. Finally, a member function called
printOnConsole() displays the two totals and number of paying as well as non paying cars total.*/


#include<iostream>
using namespace std;

class TollBooth{
    
    int carsTotalCount;
    double amount;
    int payingCarTotal;

    public :
    TollBooth(){
        this->carsTotalCount=0;
        this->payingCarTotal=0;
        this->amount=0;
    }

    void payingCar(){
        carsTotalCount++;
        amount+=0.50;
        payingCarTotal++;

    }

    void nopayCar(){
        carsTotalCount++;
    }
    
    void printOnConsole()
    {
        cout<<"Total Cars: "<<this->carsTotalCount<<endl;
        cout<<"Total Cars Paying: "<<this->payingCarTotal<<endl;
        cout<<"Amount: "<<this->amount<<endl;
        cout<<"Non paying Cars: "<<this->carsTotalCount - this->payingCarTotal<<endl;
    } 
};

int main()
{
    int choice=0;
    TollBooth tb;
    do{
        cout<<"0.Exit "<<endl;
        cout<<"1.Paying cars"<<endl;
        cout<<"2.Non paying cars"<<endl;
        cout<<"3.Display cars,amount"<<endl;
        cout<<"Enter your choice: "<<endl;
        cin>>choice;

        switch(choice){
        case 0:
            cout<<"Thank you for exploring";

            break;
        
        case 1:
        {
            tb.payingCar();
            
        }   break;
        case 2:
        {
            tb.nopayCar();
                    
        } 
          break;
        case 3:
        {
            tb.printOnConsole();
        }   
         break;
        }

    }while(choice!=0);
    return 0;
}