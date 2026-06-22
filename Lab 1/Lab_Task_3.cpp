#include<iostream>
#include<conio.h>
using namespace std;

int odd_even(int n1, int n2)
{
    if(n2<=n1)
    {
     cout << "Invalid range";
    }
    else
    {
     int i;

    cout << "Odd numbers in that range: ";
    for(i=n1; i<=n2; i++)
    {
        if(i%2!=0)
            cout << i << " ";
    }

    cout << endl;

    cout << "Even numbers in that range: ";
    for(i=n1; i<=n2; i++)
    {
        if(i%2==0)
            cout << i << " ";
    }
    }
}

int main()
{
    int n1, n2;

    cout << "Starting range: ";
    cin >> n1;

    cout << "Ending range: ";
    cin >> n2;

    odd_even(n1, n2);

    getch();

}

