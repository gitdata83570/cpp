/*Q1. Write a menu driven program to calculate volume of the box(length * width * height).
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
	int length,breadth,height;
	
	public:
	Box():Box(1,1,1)
	{  
        cout<<"parameterless constructor"<<endl;
	}	
	Box(int length,int breadth,int height)
	{
        cout<<"parameterlized constructor"<<endl;
		this->length=length;
		this->breadth=breadth;
		this->height=height;	
	}

    	Box(int a): Box(a,a,a)
	{
	    cout<<"1 parameter constructor"<<endl;
	}

    void setLength(int length){
        cout<<"Mutator/Setter"<<endl;
        cout<<this->length<<endl;//0
        this->length=length;// value assigns
        cout<<this->length<<endl;//10
    }

    int getLength(){
        cout<<"Inspector/getter"<<endl;
        return this->length;
    }
	
    void display()
    {
        cout<<this->length<<" "<<this->height<<" "<<this->breadth<<endl;

    }

};

int main()
{
	int choice=0;
   
    //  Box *b = new Box(0,2,3);//object 
    //  cout<< b->getLength()<<endl;//0
    //  b->setLength(10);
    //  cout<<b->getLength()<<endl;//10
    
	do{
    cout<<"0.Exit"<<endl;
    cout<<"1.Calculate volume with default values"<<endl;
    cout<<"2.Calculate volume with diffrent length,breadth,height"<<endl;
    cout<<"3.Calculate volume with length,breadth,height with same value"<<endl;
    cout<<"Enter your choice:"<<endl;
    cin>>choice;

    switch(choice)
    {
        case 0:
        cout<<"Exit";
        break;

        case 1:
        {
            Box b1;
            b1.display();
            
        }
        break;

        case 2:
        {
            Box b2(2,4,6);
            b2.display();
        }
        break;

        case 3:
        {
            Box b3(5);
            b3.display();
        }    
        break;

     default: cout<<"invalid choice"<<endl;
        break;
    }
    }while(choice!=0);
    return 0;
	
}