#include<bits/stdc++.h>
#include "mySTL.h"
#define mStack 100
#define postSize 100
using namespace std;
int main()
{
    node *header;
    header=(node *) malloc(sizeof(node));
    if(header==NULL)
    {
        cout<< "Memory not available"<<endl;
        return 0;
    }
    header->data=INT_MAX;
    header->link=NULL;

    ///1.test singly linked list

    int n;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        int number=rand()%1000;
        cout<< number << " ";
        insertLast(header, number);
    }
    cout<<endl;

    displaySIngleList(header);
    deleteElementByValue(header, 169);
    displaySIngleList(header);
    cout<<endl;


    ///2.test doubly linked list

    struct Node* head = NULL;


    insertAtLast(&head, 40);
    insertAtFirst(&head, 20);
    insertAtFirst(&head, 10);
    insertAtLast(&head, 50);
    insert_After(head->next, 30);

    cout<<"Double linked list: "<<endl;
    displayDoubleList(head);

    ///3.test Stack
    int i;


    char postfix[postSize];
    cout<< "\n\nStack is start from here\nEnter infix string to convert  and use ')' for end " << endl;


    for (i = 0; i <= postSize - 1; i++)
    {
        cin>> postfix[i];

        if (postfix[i] == ')')
            break;
    }


    checkPostfix(postfix);

    ///4.test queue
    Queue myq;
    myq.deQueue();

    cout<<"Queue created:"<<endl;
    myq.enQueue(10);
    myq.enQueue(20);
    myq.enQueue(30);
    myq.enQueue(40);
    myq.enQueue(50);
    myq.enQueue(60);

    myq.displayQueue();
    myq.deQueue();
    myq.displayQueue();

    ///5.test binary search tree
    struct nodee* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);
    cout<<"\nInorder traversal:\t";
    InOrder(root);
    cout<<"\nPreorder traversal:\t";
    PreOrder(root);
    cout<<"\nPostorder traversal:\t";
    PostOrder(root);
    return 0;
}
