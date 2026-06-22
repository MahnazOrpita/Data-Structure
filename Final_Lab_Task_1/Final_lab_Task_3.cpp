#include<iostream>
#include<conio.h>
using namespace std;

void PrintArray(int A[],int n);

void InsertionSort(int A[],int n)
{
    int j,k,count=0,exchange = 0;

   for (int i = 1; i < n; i++)
    {
        k = A[i];
        j = i - 1;


    for ( ; (j >= 0 && A[j] > k); j--)
        {
            A[j + 1] = A[j];
            count++;
        }
        A[j + 1] = k;
        exchange ++;

    }
PrintArray(A,n);
cout<<"Number of comparisons = "<<count<<endl;

cout<<"Number of Exchanges = "<<exchange <<endl;
}

void PrintArray(int A[],int n)
{
    cout<<"{";
    for(int i = 0 ; i<n;i++){
        cout<<A[i];
        if(i != n-1)
        cout<<",";
  }
   cout<<"}"<<endl;
}

int main()
{
int arr[] = {92, 82, 21, 16, 18, 95};
int n = sizeof(arr)/sizeof(arr[0]);

cout<<"UNSORTED ARRAY : \n";
PrintArray(arr,n);
cout<<"\nAFTER SORTING INSERTION SORT WILL BE :\n";
InsertionSort(arr,n);
getch();
}


