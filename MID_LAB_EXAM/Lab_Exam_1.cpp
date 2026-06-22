#include<iostream>
using namespace std;
int main ()
{
    int A[8], n, i, j, x;

    cout << "Enter size of array : ";
    cin >> n;


    cout << "Elements of array : ";

    for (i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (A[i] < A[j])
            {
                x = A[i];
                A[i] = A[j];
                A[j] = x;
            }
        }
    }
    cout << "Third smallest number : " << A[n - 3];
    cout << "\nThird larger number : " << A[2];

    return 0;
}
