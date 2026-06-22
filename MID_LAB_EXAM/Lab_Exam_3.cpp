#include<iostream>
using namespace std;

 class Stack
 {

    public:
    int stack[50];
    int top;
    int Max;

    public:

    Stack(int size = 50)
    {
        Max=size;
        top=0;
    }

    bool isEmpty()
    {
        if(top == 0)
            {
            cout<< "Stack is empty"<<endl;
            return true;
            }
        else
         {
            return false;
         }
    }

    bool isFull()
     {
        if(top == Max){
            cout<< "Stack is full"<<endl;
            return true;
     }
        else
         {
            return false;
         }
    }


    bool push(int x)
    {
        if(isFull() == true)
        {
            cout<< "Cannot push"<<endl;
            return false;
        }
        else
        {
            stack[top] = x;
            top++;
            return true;
        }
    }


    bool pop()
    {
        if(isEmpty()== true)
            {
            cout<< "Stack is empty - Pop operation failed"<<endl;
            return false;
           }
        else
        {
            cout<< "Elements popped"<<endl;
            cout<< "Popped element is: "<< stack[top-1]<<endl;
            top--;
            return true;
        }
    }


    void topElement()
       {
        if(isEmpty() == true)
            {
            cout<< "Stack is empty"<<endl;
            }
        else
        {
            cout<< "Top element is: "<< stack[top-1]<<endl;
        }
      }


    void show()
    {
        if(isEmpty()==true)
            {
              cout<<"Stack is Empty"<<endl;
            }
        else
        {
            cout<< "Stack is: "<<endl;
            for(int i=top-1; i>-1; i--)
            {
                cout<< stack[i]<<endl;
            }
        }
    }
};

int main()
{
    Stack s ;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.pop();
    s.topElement();
    s.show();

    return 0;
}






























