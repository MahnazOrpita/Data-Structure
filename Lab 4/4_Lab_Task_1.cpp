#include<iostream>
using namespace std;

int stack[50],Top=0,Maxsize=50;

bool isEmpty()
{
   if(Top==0)
   {
       cout<<"Stack has no element"<<endl;
       return true;
   }
   else
   {
       cout<<"Stack has element"<<endl;
       return false;

   }

}
bool isFull()
{
    if(Top==Maxsize)
    {
        cout<<"Stack is full"<<endl;
        return true;

    }
else
    {
        cout<<"Stack is not full"<<endl;
        return false;
    }

}
    bool push(int x)
{


        if (Top==Maxsize)
        {
            cout<<"Stack is full,not inserted"<<endl;
            return false;
        }
        else
        {
        stack[Top]=x;
        Top++;
        cout<<"Element inserted!"<<endl;
        return true;
        }
}


bool pop()
{
    if (Top==0)
    {
        cout<<"Stack is empty,not poppes!"<<endl;
        return false;
    }
    else{
        cout<<"Element popped!"<<endl;
        cout<<"The popped element is:"<<stack[Top-1]<<endl;
        Top--;
        return true;
    }
}
void TopElement()
{
    if(Top==0)
        cout<<"Stack is empty"<<endl;
    else
    {
        cout<<"Topelement is:"<<stack[Top-1]<<endl;
    }
}
void show()
{
    if(Top==0)
        cout<<"Stack has no element to show"<<endl;
    else
        {
            cout<<"Stack is: "<<endl;
            for(int i=Top-1;i>-1;i--)
            {
                cout<<stack[i]<<endl;
            }

         }
}

int main()
{
    isEmpty();
    isFull();
    push(1);
    push(2);
    push(3);
    isEmpty();
    pop();
    TopElement();
    pop();
    TopElement();
    pop();
    TopElement();
    pop();
    TopElement();

    push(4);
    push(5);
    push(6);
    show();


    return 0;
}
