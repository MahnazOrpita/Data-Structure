#include<iostream>
using namespace std;
struct Node
{
   int data;
   struct Node *next;
};

struct Queue
{
    Node* front;
    Queue()

    {
      front = NULL;
    }

void enqueue(int value)

 {
   Node* n = new Node();
   n->data = value;
   n->next = NULL;

   if(front==NULL)
       {
         front=n;
       }
       else
       {
        Node* CurrentNode=front;
        while(CurrentNode-> next !=NULL)

            CurrentNode=CurrentNode->next;
            CurrentNode->next=n;
         }

 }
void dequeue()
{
   if(front==NULL)
   cout<<"Queue Underflow"<<endl;
   else
   {
      cout<<"The dequeued element is :"<< front->data <<endl;
      front = front->next;
   }
}
void display()
{
   struct Node* ptr;
   if(front==NULL)
   cout<<"Queue is empty";
   else
   {
     Node* CurrentNode=front;
        while(CurrentNode !=NULL)
        {
            cout<<CurrentNode->data<<" ";
            CurrentNode=CurrentNode->next;
        }
        cout<<endl;
      }
  }

};
int main()
{
   Queue obj;
    obj.enqueue(1);
    obj.enqueue(2);
    obj.enqueue(3);
    obj.enqueue(4);
    obj.enqueue(5);
    obj.enqueue(6);
    obj.enqueue(7);
    obj.enqueue(8);
    obj.enqueue(9);
    obj.enqueue(10);
    obj.display();
    obj.dequeue();
    obj.dequeue();
    obj.display();
}
