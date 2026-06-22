#include<iostream>
#include<conio.h>
using namespace std;

int total_odd(int a[], int n)
{
    int i, count=0;

    for(i=0; i<n; i++)
    {
        if(a[i]%2!=0)
            count++;
    }
    cout << "Total odd numbers: " << count << endl;
}

int total_even(int a[], int n)
{
    int i, count=0;

    for(i=0; i<n; i++)
    {
        if(a[i]%2==0)
            count++;
    }
    cout << "Total even numbers: " << count << endl;
}

int sum_odd(int a[], int n)
{
    int i, sum=0;

    for(i=0; i<n; i++)
    {
        if(a[i]%2!=0)
            sum=sum+a[i];
    }
    cout << "Sum of odd numbers: " << sum << endl;
}

int sum_even(int a[], int n)
{
    int i, sum=0;

    for(i=0; i<n; i++)
    {
        if(a[i]%2==0)
            sum=sum+a[i];
    }
    cout << "Sum of even numbers: " << sum << endl;
}

int main()
{
    int a[100];
    int i, n;

    cout << "Enter N: ";
    cin >> n;

    for(i=0; i<n; i++)
    {
        cout << i+1 << " element: ";
       cin >> a[i];
    }

    total_odd(a, n);
    total_even(a, n);
    sum_odd(a, n);
    sum_even(a, n);

    getch();
}


