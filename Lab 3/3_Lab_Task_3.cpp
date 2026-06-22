#include<iostream>
#include<conio.h>
using namespace std;

struct student
{
     int id;
     int credits;
     int semester;
     float cgpa;
};
int main()
{
    struct  student arr[15];

     for(int i=0;i<15 ;i++)

        {

     cout<<"ID of Student"<<"["<<i+1<<"]"<<" : ";
     cin>>arr[i].id;

     cout<<"Number of semester completed of student"<<"["<<i+1<<"]"<<" : ";
     cin>>arr[i].semester;


     cout<<"Number of Credit completed of Student"<<"["<<i+1<<"]"<<" : ";
     cin>>arr[i].credits;


     cout<<"CGPA of Student"<<"["<<i+1<<"]"<<" : ";
     cin>>arr[i].cgpa;
     cout<<endl;

        }

     cout << "The student's ID whose CGPA is more than 3.50 -> ";


     for (student i : arr)
        if(i.cgpa>3.75)

        cout<<i.id<<" , ";
        cout<<endl;


        cout << "The student's ID who has completed more than Fifty Credits - ";


        for (student i : arr) if(i.credits>50) cout<<i.id<< " , ";
        cout<<endl;
         cout << "The student's who has completed minimum 2 semester and minimum 28 credits -> ";


        for (student i : arr) if(i.semester>=2 && i.credits>=28) cout<<i.id<< " , ";


getch();

}
