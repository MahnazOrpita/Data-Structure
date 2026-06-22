#include<iostream>
#include<conio.h>
using namespace std;


void bubbleSort(int arr[], int n)
{
   int i, j;
   bool swapped;
   int count=1;
   int exchange=0;

   for (i = 0; i < n-1; i++)
   {
     swapped = false;
     for (j = 0; j < n-i-1; j++)
     {
        if (arr[j] > arr[j+1])
        {
           swap(arr[j], arr[j+1]);

           swapped = true;
           exchange++;
        }

           ++count;
     }

     if (swapped == false)
        break;
   }
   cout<<"Number of exchanges = "<<" "<<exchange<<" "<<endl;

   cout<<"\n";

   cout<<"Number of comparisons = "<<" "<<count<<" "<<endl;
}


void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout <<" "<< arr[i];
}

int main()
{
    int arr[] = {92, 82, 21, 16, 18, 95};
    int N = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, N);
    cout<<"\n";

    cout<<"Sorted array:";
    printArray(arr, N);
    getch();
}


