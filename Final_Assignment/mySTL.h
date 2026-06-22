#include<bits/stdc++.h>
#include<iostream>
using namespace std;

struct node
{
    int data;
    node *link;
};

///strat from header
void insertFirst(node *header,int data)
{
    node *newNode=(node *)malloc(sizeof(node));
    if(newNode==NULL)
        cout<< "Memory not available"<<endl;
    else
    {
        newNode->data=data;
        newNode->link=header->link;
        header->link=newNode;
    }
}

///header to newNode
void insertLast(node *header,int data)
{
    node *ptr=header;
    while(ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    node *newNode=(node *)malloc(sizeof(node));
    if(newNode==NULL)
        cout<< "Memory not available"<<endl;
    else
    {
        newNode->data=data;
        newNode->link=ptr->link;
        ptr->link=newNode;
    }
}

///header-n1-n2-n3....
void insertAnyPos(node *header, int data,int index)
{
    node *ptr=header;
    int indexCheck=-1;

    while(indexCheck< index-1 && ptr->link != NULL)
    {
        indexCheck++;
        ptr = ptr->link;
    }

    if(indexCheck+1 !=index)
        cout<< "Out of Bound"<<endl;
    else
    {
        node *newNode= (node *) malloc(sizeof(node));
        if(newNode == NULL)
            cout<< "Memory not available"<<endl;
        else
        {
            newNode->data=data;
            newNode->link=ptr->link;
            ptr->link=newNode;
        }
    }
}
int serachIndexOfValue(node *header,int data)
{
    node *ptr =header->link;
    int index=0;
    while(ptr ->data !=data && ptr != NULL)
    {
        index++;
        ptr=ptr->link;
    }
    if(ptr -> data == data)
        return index;
    else
        return -1;
}
int valueOfIndex(node *header,int index)
{
    node *ptr = header->link;
    int i=0;
    do
    {
        if(ptr==NULL)
        {
            cout<< "Array out of bound."<<endl;
            return -9999;
        }
        else
        {
            ptr=ptr->link;
            i++;
        }
    }
    while(i!=index);
    return ptr->data;
}

void insertBefore(node *header,int data,int value)
{
    int index = serachIndexOfValue(header,value);
    insertAnyPos(header,data,index);
}
void deleteAt(node *header,int index)
{
    node *ptr=header;
    int indexCheck=-1;
    if(header->link==NULL)
        return;
    while(indexCheck <index-1 && ptr->link!=NULL)
    {
        indexCheck++;
        ptr=ptr->link;
    }
    if(indexCheck+1 !=index)
        return;
    node *temp = ptr->link->link;
    ptr->link=temp;
}
void deleteElementByValue(node *header,int value)
{
    int index= serachIndexOfValue(header,value);
    deleteAt(header, index);

}

///display single linked list
void displaySIngleList(node *header)
{
    node *ptr =header->link;
    while(ptr !=NULL)
    {
        cout<< ptr->data<< " ";
        ptr=ptr->link;
    }
    cout<< endl;
}


///2.Doubly linked list
struct Node
{
    int data;
    struct Node* next;
    struct Node* prev;
};

void insertAtFirst(struct Node** head, int new_data)
{

    struct Node* newNode = new Node;

    newNode->data = new_data;
    newNode->next = (*head);
    newNode->prev = NULL;

    if ((*head) != NULL)
        (*head)->prev = newNode;

        (*head) = newNode;
}
void insert_After(struct Node* prev_node, int new_data)
{

    if (prev_node == NULL)
    {
        cout<<"Previous node is required , it cannot be NULL";
        return;
    }

    struct Node* newNode = new Node;


    newNode->data = new_data;
    newNode->next = prev_node->next;
    prev_node->next = newNode;
    newNode->prev = prev_node;

    if (newNode->next != NULL)
        newNode->next->prev = newNode;
}


void insertAtLast(struct Node** head, int new_data)
{

    struct Node* newNode = new Node;
    struct Node* last = *head;

    newNode->data = new_data;
    newNode->next = NULL;

    if (*head == NULL)
    {
        newNode->prev = NULL;
        *head = newNode;
        return;
    }

    while (last->next != NULL)
        last = last->next;

    last->next = newNode;
    newNode->prev = last;
    return;
}
///

//void deletePos(int value)
//{
//    struct Node* temp= head;
//    while(temp->data != value)
//        temp= temp ->next;
//    if(temp->next==NULL)
//        return;
//    if(temp->next==NULL)
//        return;
//    if(temp->next->next==NULL)
//        temp-next=NULL;
//    struct Node* ptr=temp->next;
//    temp->next=ptr->next;
//    ptr->next->prev=temp;
//    free(ptr);
//}


///
// doubly linked list display
void displayDoubleList(struct Node* node)
{
    struct Node* last;

    while (node != NULL)
    {
        cout<<node->data<<"  ";
        last = node;
        node = node->next;
    }
    if(node == NULL)
        cout<<"EMPTY";
}

///3.Stackk Class
#define mStackk 100
#define postSize 100


int Stackk[mStackk];
int top = -1;
void push(int item)
{

    if (top >= mStackk - 1)
    {
        cout<< "Stack is overflow"<<endl;
        return;
    }
    else
    {
        top = top + 1;
        Stackk[top] = item;
    }
}

int pop()
{
    int item;
    if (top < 0)
        cout<< "Stack is underflow"<<endl;
    else
    {
        item = Stackk[top];
        top = top - 1;
        return item;
    }
}

void checkPostfix(char postfix[])
{

    int i;
    char ch;
    int val;
    int A, B;


    for (i = 0; postfix[i] != ')'; i++)
    {
        ch = postfix[i];
        if (isdigit(ch))
        {

            push(ch - '0');
        }
        else
        {
            if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
            {

                A = pop();
                B = pop();

                switch (ch)
                {
                case '*':
                    val = B * A;
                    break;

                case '/':
                    val = B / A;
                    break;

                case '+':
                    val = B + A;
                    break;

                case '-':
                    val = B - A;
                    break;
                }

                /// push onto Stack
                push(val);

            }
            else
            {
                cout<< "\n Invalid expression."<<endl;
                break;
            }

        }
    }

    cout<< "result is: "<< pop()<<endl;

}
///4.Queue Class implementation
#define MAX_SIZE 5
class Queue
{
private:
    int myqueue[MAX_SIZE], front, rear;

public:
    Queue()
    {
        front = -1;
        rear = -1;
    }

    bool isFull()
    {
        if(front == 0 && rear == MAX_SIZE - 1)
        {
            return true;
        }
        return false;
    }

    bool isEmpty()
    {
        if(front == -1) return true;
        else return false;
    }

    void enQueue(int value)
    {
        if(isFull())
        {
            cout << endl<< "Queue is full!!";
        }
        else
        {
            if(front == -1) front = 0;
            rear++;
            myqueue[rear] = value;
            cout << value << " ";
        }
    }
    int deQueue()
    {
        int value;
        if(isEmpty())
        {
            cout << "Queue is empty!!" << endl;
            return(-1);
        }
        else
        {
            value = myqueue[front];
            if(front >= rear)
            {
                front = -1;
                rear = -1;
            }
            else
            {
                front++;
            }
            cout << endl << "Deleted => " << value << " from myqueue";
            return(value);
        }
    }
    void displayQueue()
    {
        int i;
        if(isEmpty())
        {
            cout << endl << "Queue is Empty!!" << endl;
        }
        else
        {
            cout << endl << "Front = " << front;
            cout << endl << "Queue elements : ";
            for(i=front; i<=rear; i++)
                cout << myqueue[i] << "\t";
            cout << endl << "Rear = " << rear << endl;
        }
    }
};

///5.Binary search tree

typedef struct nodee
{
    int value;
    struct nodee* left;
    struct nodee* right;
} nodee;

void InOrder(struct nodee* root)
{
    if (root == NULL) return;
    InOrder(root->left);
    cout<< root->value<< " ";
    InOrder(root->right);
}

void PreOrder(struct nodee* root)
{
    if (root == NULL) return;
    cout<< root->value<< " ";
    PreOrder(root->left);
    PreOrder(root->right);
}

void PostOrder(struct nodee* root)
{
    if (root == NULL) return;
    PostOrder(root->left);
    PostOrder(root->right);
    cout<< root->value<< " ";
}

struct nodee* createNode(int value)
{
    struct nodee* newNode = new nodee();
    newNode->value = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

