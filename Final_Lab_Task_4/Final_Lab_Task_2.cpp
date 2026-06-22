#include<iostream>
using namespace std;
struct Node
{
   int data;
   struct Node *next;
};

struct Stack
{
    Node* top;
    Stack()
    {
     top = NULL;
    }

void push(int value)
 {

   Node* n = new Node();

   n->data = value;
   n->next = top;

   top = n;
 }
void pop()
{
   if(top==NULL)


   cout<<"Stack Underflow"<<endl;

   else
   {
      cout<<"The popped element is "<< top->data <<endl;

      top = top->next;
   }
}
void display()
{
   struct Node* ptr;

   if(top==NULL)

   cout<<"Stack is empty";

   else
    {
      ptr = top;
      cout<<"Stack elements are: ";
      while (ptr != NULL)
        {
         cout<< ptr->data <<" ";
         ptr = ptr->next;
        }
    }
   cout<<endl;
}
};

int main()
{
    Stack obj;

    obj.push(1);
    obj.push(2);
    obj.push(3);
    obj.push(4);
    obj.push(5);
    obj.push(6);
    obj.push(7);
    obj.push(8);
    obj.push(9);
    obj.push(10);
    obj.display();
    obj.pop();
    obj.pop();
    obj.display();

}
