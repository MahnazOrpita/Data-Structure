#include <iostream>
using namespace std;

 class MyStack
 {

    public:
    int Stack[100];
    int top;
    int Max;

    public:

    MyStack(int size = 100)
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
            Stack[top] = x;
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
            cout<< "Popped element is: "<< Stack[top-1]<<endl;
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
            cout<< "Top element is: "<< Stack[top-1]<<endl;
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
                cout<< Stack[i]<<endl;
            }
        }
    }
};

int main()
{
    MyStack s ;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.pop();
    s.topElement();
    s.show();

    return 0;
}
