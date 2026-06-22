#include<iostream>
using namespace std;

int maxSize=8;
int Queue[8];
int front=-1;
int rear=-1;


bool isEmpty()
{
    if(front==-1)
        {
        cout << "Queue is empty!\n";
        return true;
    }
    else
    {
        cout << "Queue is not empty!\n";
        return false;
    }
}


bool isFull()
{
    if(front==0 && rear==4)
        {
        cout << "Queue is full!\n";
        return true;
        }
    else
    {
        cout << "Queue is not full!\n";
        return false;
    }
}



void Enqueue(int x)
{
    if(front==0 && rear==4)
        {
        cout << "Queue is full!\n";
    }
    else{
        front=0;
        rear++;
        Queue[rear]=x;
        cout << "Queue enqueued!\n";
    }
}

void Dequeue()
{
    if(front==-1)
    {
        "Queue is empty!\n";
    }
    else{
        if(front>=rear)
        {
            front=-1;
            rear=-1;
        }
        else
        {
            front++;
        }
        cout << "Queue dequeued!\n";
    }
}

void FrontElement()
{
    if(front==-1)
    {
        cout << "Queue is empty!\n";
    }
    else
    {
        cout << "\nQueue front: " << front << "\n";
        cout << "Queue rear: " << rear << "\n";
    }
}

void showQueue()
{
    if(front==-1)
    {
        cout << "Queue is empty!\n";
    }
    else
    {
        cout << "\nQueue elements: ";

        for(int i=front; i<=rear; i++)
        {
            cout << Queue[i] << " ";
        }
        cout << "\n";
    }
}

int main()
{
    cout << "\n";

    isFull();
    isEmpty();

    cout << "\n";

    Enqueue(6);
    Enqueue(7);
    Enqueue(8);
    Enqueue(9);
    Enqueue(10);
    Enqueue(11);
    Enqueue(12);
    Enqueue(13);

    isFull();
    isEmpty();

    FrontElement();

    showQueue();

    cout << "\n";

    Dequeue();
    Dequeue();

    FrontElement();

    showQueue();

    isFull();
    isEmpty();



    return 0;
}
