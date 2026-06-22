#include<iostream>
#include<stdlib.h>
using namespace std;

struct treeNode
{
    int data;
    treeNode *left;
    treeNode *right;
};


treeNode *Insert(treeNode *node,int data)
{
    if(node==NULL)
    {
        treeNode *temp;
        temp=new treeNode;

        temp -> data = data;
        temp -> left = temp -> right = NULL;
        return temp;
    }
    if(data >(node->data))
    {
        node->right = Insert(node->right,data);
    }
    else if(data < (node->data))
    {
        node->left = Insert(node->left,data);
    }

    return node;
}

treeNode * Find(treeNode *node, int data)
{
    if(node==NULL)
    {

        return NULL;
    }
    if(data > node->data)
    {

        return Find(node->right,data);
    }
    else if(data < node->data)
    {

        return Find(node->left,data);
    }
    else
    {

        return node;
    }
}
void Inorder(treeNode *node)
{
    if(node==NULL)
    {
        return;
    }
    Inorder(node->left);
    cout<<node->data<<" ";
    Inorder(node->right);
}
void Preorder(treeNode *node)
{
    if(node==NULL)
    {
        return;
    }
    cout<<node->data<<" ";
    Preorder(node->left);
    Preorder(node->right);
}
void Postorder(treeNode *node)
{
    if(node==NULL)
    {
        return;
    }
    Postorder(node->left);
    Postorder(node->right);
    cout<<node->data<<" ";
}
int main()
{
    treeNode *root = NULL,*temp;
    int ch;

    while(1)
    {
        cout<<"\n1.Insert\n2.Inorder\n3.Preorder\n4.Postorder \n5.Search\n6.Exit\n";
        cout<<"Select one:";
        cin>>ch;
        switch(ch)
        {
        case 1:
            cout<<"\nEnter element to be insert:";
            cin>>ch;
            root = Insert(root, ch);
            cout<<"\nElements in BST are:";
            Inorder(root);
            break;
        case 2:
            cout<<"\nInorder Travesals is:";
            Inorder(root);
            break;
        case 3:
            cout<<"\nPreorder Traversals is:";
            Preorder(root);
            break;
        case 4:
            cout<<"\nPostorder Traversals is:";
            Postorder(root);
            break;

        case 5:
            cout<<"\nEnter element to be searched:";
            cin>>ch;
            temp = Find(root,ch);
            if(temp==NULL)
            {
                cout<<"Element is not foundn";
            }
            else
            {
                cout<<"Element "<<temp->data<<" is Found\n";
            }
            break;
        case 6:
            exit(0);
            break;
        default:
            cout<<"\nEnter correct choice:";
            break;
        }
    }
    return 0;
}
