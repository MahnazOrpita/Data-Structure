#include<iostream>
#include<conio.h>
using namespace std;
struct node
{
int value;
node* next;
};
class Queue
{
private:
node* front;
node* rear;
public:
Queue()
{
front = rear = NULL;
}
void Enqueue(int n)
{
node* temp = new node();
temp->value = n;
temp->next = NULL;
if (front == NULL && rear == NULL)
{
front = rear = temp;
return;
}
rear->next = temp;
rear = temp;
}
void Dequeue()
{
node* temp = front;
if (front == NULL)
{
cout << "Queue is empty!\n";
return;
}
else if (front == rear)
{
front = rear = NULL;
}
else
{
front = front->next;
}
delete temp;
}
int displayFront()
{
if (front == NULL)
{
cout << "Queue is empty!\n";
}
else
{
return front->value;
}
}
void Display()
{
node* temp = front;
cout << "Queue elements are: ";
cout<<"\n";
while (temp != NULL)
{
cout << temp->value << " ";
temp = temp->next;
}
cout << "\n";
}
};
int main()
{
Queue s;
s.Enqueue(1);
s.Enqueue(2);
s.Enqueue(3);
s.Enqueue(4);
s.Enqueue(6);
s.Enqueue(7);
s.Display();
cout << "Front element is:"<<s.displayFront()<<endl;
cout<<"\n";

s.Dequeue();
s.Enqueue(8);
s.Enqueue(9);
s.Display();

cout << "Front element is:"<<s.displayFront();
cout<<"\n";
cout<<endl;

s.Dequeue();
s.Display();
cout <<"Front element is:"<<s.displayFront();
cout<<"\n";
getch();
}
