/*Q1. Stack is a Last-In-First-Out data structure. Write a Stack class. It implements stack using
Dynamically allocated array. Stack size should be passed in parameterized constructor. If size is not
given, allocate stack of size 5.
Provide member functions like push(), pop(), peek(), isEmpty(), isFull(), and print().*/

#include<iostream>
using namespace std;
class stack
{
private:
    int *top;
    static int i;
    int size;
public:
    stack():stack(5)
    {

    }
    stack(int size):size(size)
    {   
      top=new int[size];
    }
    void push(int a)
    {
        i++;
        top[i]=a;
    }
    void pop()
    {
        top[i]=0;
        i--;
    }
    int peek()
    {
       return top[i];
       // cout<<"top element is :"<<top[i]<<endl;
    }
    int isEmpty()
    {
      if(i==-1)
      {
       return 1;
       // cout<<"stack is empty"<<endl;
      }
      else
      {
        return 0;
        //cout<<"stack is not empty"<<endl;
      }
    }
    int isFull()
    {
        if(i==size-1)
        {
            return 0;
            //cout<<"stack is full"<<endl;
        }
        else
        {
            return 1;

            //cout<<"stack is not full"<<endl;
        }
    }
    void print()
    {
       int j;
       for(j=0;j<size;j++)
            cout<<j<<"the element is :"<<top[j]<<endl;
    }
    ~stack()
    {
      delete[] top;
      top=NULL;
    }
};
    
    int stack::i=-1;

int main()
{
    int siz;
    cout<<"enter size of stack : ";
    cin>>siz;
    stack s(siz);
    int choice;
    do
    {
        cout<<"0.EXIT  1.PUSH  2. POP  3. PEEK   4.ISEMPTY  5.ISFULL  6.PRINT"<<endl;
        cout<<"enter choice : ";
        cin>>choice;
        switch (choice)
        {
        case 0:
            cout<<"thanks for using"<<endl;
            break;
        
        case 1:
           {
            if(s.isFull())
            {
            int l;
            cout<<"enter the value to push"<<endl;
            cin>>l;
            s.push(l);
            }
            else 
            {
                cout<<"stack is full"<<endl;
            }
           }
            break;

          case 2:
            {
                if(s.isEmpty())
                {
                    cout<<"stack is empty"<<endl;
                }
                else
                {
                   s.pop();
                }

            }
           
            break;

          case 3:
            {
                if(s.isEmpty())
                {
                    cout<<"stack is empty"<<endl;
                }
                else
                {
                   cout<<"element at top is : "<<s.peek()<<endl;
                }

            }           
            break;

          case 4:
              {
                if(s.isEmpty())
                {
                    cout<<"stack is empty"<<endl;
                }
                else
                {
                   cout<<"stack is not empty"<<endl;
                }

            }  
            break;

          case 5:
         {
            if(s.isFull())
            {
    
            cout<<"stack is not full"<<endl;
           
            }
            else 
            {
                cout<<"stack is full"<<endl;
            }
           }
            break;

          case 6:
             {
                if(s.isEmpty())
                {
                    cout<<"stack is empty"<<endl;
                }
                else
                {
                   s.print();
                }

            }             
            break;                    
        default:

            cout<<"enter a valid choice "<<endl;
            break;
        }
    } while (choice!=0);
    

    return 0;
}
