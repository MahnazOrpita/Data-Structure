#include<iostream>
#include<conio.h>
using namespace std;

int reverse_array(int a[], int n)
{
    cout << "Reverse order: ";
    int i;

    for(i=n-1; i>=0; i--)
    {
        cout << a[i] << " ";
    }
    cout << "\n";
}

int largest_number(int a[], int n)
{
    int largest = a[0];

    int i;

    for(i=1; i<5; i++)
    {

        if(a[i] >largest)
            largest = a[i];
    }
    cout << "Largest element:" << largest << endl;
}

int smallest_number(int a[], int n)
{
    int smallest = a[0];

    int i;

    for(i=1; i<5; i++)
    {

        if(a[i] < smallest)
            smallest = a[i];
    }
    cout << "Smallest element:" << smallest << endl;
}

int avg_num(int a[], int n)
{
    float sum=0;

    int i;

    for(i=0; i<5; i++)
    {
        sum = sum + a[i];
    }

    float avg;

    avg = sum/5;

    cout << "Average value of the elements:" << avg << endl;
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

    reverse_array(a, n);
    largest_number(a, n);
    smallest_number(a, n);
    avg_num(a, n);

    getch();
}
