#include<iostream>
#include<conio.h>
using namespace std;

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;

}

void printArray(int array[], int size)
{
  for (int i = 0; i < size; i++)
    {
    cout << array[i] << " ";
    }
  cout << endl;
}

void selectionSort(int array[], int size)
{
    int v,c;

  for (int step = 0; step < size - 1; step++)
    {
    int min_idx = step;
    for (int i = step + 1; i < size; i++)
        {

      if (array[i] < array[min_idx])

        min_idx = i;

        v++;

        }

           if(min_idx != step)
           { swap(&array[min_idx], &array[step]);
              c++;
           }
     }
   cout<<"Number of comparisons ="<<" "<<v<<endl;

   cout<<"Number of exchanges ="<<" "<<c<<endl;
}


int main()
{
  int data[] = {92, 82, 21, 16, 18, 95};
  int size = sizeof(data) / sizeof(data[0]);

  selectionSort(data, size);
  cout << "SelectionSorted array in Acsending Order:\n";
  printArray(data, size);
  getch();
}

