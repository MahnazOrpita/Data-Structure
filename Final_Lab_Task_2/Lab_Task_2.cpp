#include<iostream>
using namespace std;

class MyQueue
{

private:
    int Queue[8];
    int front;
    int rear;

public:
    MyQueue()
    {
        int front=-1;
        int rear=-1;
    }

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
        if(front==0 && rear==4){
            cout << "Queue is full!\n";
            return true;
        }
        else
            {
            cout << "Queue is not full!\n";
            return false;
        }
    }


    void Enqueue(int value)
    {
        if(front==0 && rear==4){
            cout << "Queue is full!\n";
        }
        else{
            front=0;
            rear++;
            Queue[rear]=value;
            cout << "Queue enqueued!\n";
        }
    }


    void Dequeue(){
        if(front==-1){
            cout << "Queue is empty!\n";
        }
        else{
            if(front>=rear){
                front=-1;
                rear=-1;
            }
            else{
                front++;
            }
            cout << "Queue dequeued!\n";
        }
    }

    void FrontValue(){
        if(front==-1){
            cout << "Queue is empty!\n";
        }
        else{
            cout << "\nQueue front: " << front << "\n";
            cout << "Queue rear: " << rear << "\n";
        }
    }


    void showQueue(){
        if(front==-1){
            cout << "Queue is empty!\n";
        }
        else{
            cout << "\nQueue elements: ";
            for(int i=front; i<=rear; i++){
                cout << Queue[i] << " ";
            }
            cout << "\n";
        }
    }
};


int main()
{
    cout << "\n";
    MyQueue s;

    s.isEmpty();
    s.isFull();


    s.Enqueue(1);
    s.Enqueue(2);
    s.Enqueue(3);
    s.Enqueue(4);
    s.Enqueue(5);
    s.Enqueue(6);
    s.Enqueue(7);
    s.Enqueue(8);



    s.showQueue();

    s.Dequeue();
    s.Dequeue();

    s.FrontValue();

    s.showQueue();




    return 0;
}

