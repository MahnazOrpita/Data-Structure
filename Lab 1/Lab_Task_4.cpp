#include<iostream>
#include<conio.h>
using namespace std;

int find_prime(int n)
{
    int i;
    if(n<2)
        return 0;

    if(n==2)
        return 1;

    if(n%2==0)
        return 0;

    for(i=3; i<n/2; i=i+2)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}

int find_fact(int n)
{
    int i, fact=1;

    if(0 == find_prime(n))
        cout << "Error! Not a prime number!" << endl;
    else{
        for (i=1; i<=n; i++){
            fact=fact*i;
        }
        cout << fact << endl;
  }
}

int main()
{
    int n;

    cout << "Enter a number:";
    cin >> n;

    find_fact(n);

    getch();
}

