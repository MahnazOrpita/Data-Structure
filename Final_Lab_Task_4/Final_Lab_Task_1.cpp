#include<iostream>
using namespace std;
struct Node
{
   int data;
   Node* next;
};

struct List
{
   Node *FirstNode;
    Node* PreviousNode;

   List()
   {
     FirstNode=NULL;
     PreviousNode=NULL;
   }
  void insertFList(int o)
  {
     Node* n =new Node();

     if(FirstNode==NULL)
      {
       FirstNode=n;
      }
     else
     {
        n->data=o;
        n->next=NULL;
        n->next=FirstNode;
        FirstNode=n;
     }

  }

   void insertList(int l)
   {
       Node* n =new Node;
       n->data=l;
       n->next=NULL;
       if(FirstNode==NULL)
       {
          FirstNode=n;
       }
       else
       {
        Node* CurrentNode=FirstNode;
        while(CurrentNode-> next !=NULL)

            CurrentNode=CurrentNode->next;
            CurrentNode->next=n;

       }

   }

   void traverselist()
   {
         Node* CurrentNode=FirstNode;
        while(CurrentNode !=NULL)
        {
            cout<<CurrentNode->data<<" ";
            CurrentNode=CurrentNode->next;
        }
        cout<<endl;
   }

    void Firstdelete()
    {
        Node* CurrentNode=FirstNode;
        FirstNode=CurrentNode->next;
        delete CurrentNode;
    }

    bool search(int e)
    {
        bool flag=false;
        Node* CurrentNode=FirstNode;

        while(CurrentNode !=NULL)
        {
             if(CurrentNode->data==e)
             {
               flag=true;
             }
              CurrentNode=CurrentNode->next;
        }

       return flag;

    }

   void Middledelete(int e)
   {
    Node* CurrentNode=FirstNode;
     if(search(e)==true)
     {
       while(CurrentNode-> data !=e)
         {

                 PreviousNode=CurrentNode;
                 CurrentNode=CurrentNode->next;
         }

          PreviousNode->next=CurrentNode->next;

      }
     else
      {
        cout<<"Not Found and cannot be removed.\n";
      }
     delete CurrentNode;
    }


    void Lastdelete()
    {
         Node* CurrentNode=FirstNode;


          while(CurrentNode-> next !=NULL)
           {
              PreviousNode=CurrentNode;
              CurrentNode=CurrentNode->next;

           }
          PreviousNode->next=NULL;
          delete CurrentNode;
    }
};

int main()
{
      List obj;
      obj.insertList(1);
      obj.insertList(2);
      obj.insertList(3);
      obj.insertList(4);
      obj.insertList(5);
      obj.insertList(6);
      obj.insertList(7);
      obj.insertList(8);
      obj.insertList(9);
      obj.insertList(10);
      obj.traverselist();

     cout<<"PLease Choose:\n1.Do you want to add at the begining?\n2.Do you want to add at the last?\n3.Exit\n Enter Here :";
     int value;
     cin>>value;
     switch(value)
     {
        case 1 :cout<<"Please Enter The Number what you want to add :";
                 int k;
                 cin>>k;
                 obj.insertFList(k);obj.traverselist();
        break;
        case 2 :cout<<"Please Enter The Number what you want to add :";
                 int p;
                 cin>>p;
                 obj.insertList(p);obj.traverselist();
        break;
        default:
        break;

     }

      cout<<"What Type of delete operation you want?\n1.Delete From First\n2.Delete From Middle\n3.Delete From Last\n4.Exit\n Enter Here:";
      int a;
      cin>>a;
      switch(a)
      {
        case 1:obj.Firstdelete();obj.traverselist();
        break;
        case 2:
            cout<<"Which Element You Want To Delete?"<<endl;
            cout<<"Please Enter Here:"<<endl;

        int k;
        cin>>k;
        obj.Middledelete(k);obj.traverselist();
        break;
        case 3:obj.Lastdelete();obj.traverselist();
        break;
        case 4:
        break;
      }

      cout<<"Which elememt do you want search?\nEnter here:";
      int z;
      cin>>z;
      if(obj.search(z)==true)
       {
        cout<<"Yes; Linked List Have This Element !\n";
       }
      else
       {
        cout<<"Not Found!\n";
       }

      cout<<" Linked list :\n";
      obj.traverselist();

}
