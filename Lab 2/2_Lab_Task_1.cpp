#include<iostream>
using namespace std;

int check_prime(int a[], int b[], int n)
{
    int i, j;

    for(i=0, j=0; i<n; i++)
    {
        if(a[i]==2)
            continue;

        if(a[i]<2 || a[i]%2==0 )
        {
            b[j]=a[i];
            j++;
        }
    }
    for(i=0; i<j; i++)
        cout << b[i] << " ";
}

int main()
{
    int i, n;

    cout << "Enter the size of the array: ";
    cin >> n;

    int Array_1[n], Array_2[n];

    for(i=0; i<n; i++)
    {
        cout << i+1 << " element: ";
        cin >> Array_1[i];
    }

    check_prime(Array_1, Array_2, n);

    return 0;
}

