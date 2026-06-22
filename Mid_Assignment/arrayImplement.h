#include<iostream>
using namespace std;
void print1DArray(int *array, int size)
 {
    cout << "array elements: ";

    for (int i = 0; i < size; i++)
      {
        cout << array[i] << " ";
      }
    cout << endl;
 }

void reversePrint1DArray(int *array,int size)
 {
    cout<< "reverse array: ";

    for (int i = size - 1; i >= 0; i--){
        cout << array[i] << " ";
    }
    cout << endl;
 }
void input1DArray(int *array,int size)
 {
    cout << "enter array elements"<< endl;

    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
 }
 void searchIn1DArray(int *array, int size,int searchKey )
  {
    int flag=-1;
    for(int i = 0; i < size; i++)
    {
        if(array[i]==searchKey)
        {
           flag =i;
            cout<<searchKey<<" found at index "<<flag<<endl;
            break;

        }
    }
    if(flag==-1)
    {
        cout<<searchKey<<" not found"<<endl;
    }

  }
void findMax1DArray(int *array, int size)
  {

    int max = array[0];
    for (int i = 1; i < size; i++)
    {
        if (array[i] > max)
            max = array[i];
    }

    cout<< "max element: "<< max <<endl;
  }

void findMin1DArray(int *array, int size)
  {
    int min = array[0];
    for (int i = 1; i < size; i++)
    {
        if (array[i] < min)
            min = array[i];
    }

   cout<<"min element: "<< min <<endl;
  }
void copy1DArray(int *sourceArray, int *DestinationArray, int size)
  {
    for (int i = 0; i < size; i++)
    {
        DestinationArray[i] = sourceArray[i];
    }


     cout<< "copy array: ";
    for (int i = 0; i < size; i++)
     {
        cout<< DestinationArray[i] << " ";
     }

  }

void input2DArray(int **arr, int size)
  {

    cout << "Enter 2D array elements: ";
    for (int i = 0; i < size; i++)
    {

        for (int j = 0; j < size; j++)
        {
            cin >> arr[i][j];
        }
    }
  }

void print2DArray(int **arr, int size)
  {
    cout << " 2D array : " << endl;
    for (int i = 0; i < size; i++)
    {

        for (int j = 0; j < size; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
  }
void reversePrint2DArray(int **arr, int size)
  {

    cout << "reverse 2d array:: " << endl;
    for (int i = size - 1; i >= 0; i--)
    {

        for (int j = size - 1; j >= 0; j--)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
  }

void searchIn2DArray(int **array,int size,int searchKey)
   {
     int flg=-1;
     for(int i=0;i<size;i++)
     {
         for(int j=1;j<size;j++)
         {
             if (array[i][j]==searchKey)
             {
                 flg=1;
                 cout<<searchKey<<" found at index ["<<i<<"]["<<j<<"]"<<endl;
                 break;

             }
         }
     }
     if(flg==-1)
     {
         cout<<searchKey<<" not found"<<endl;
     }
  }


int findMax2DArray(int **arr, int size)
  {
    int max = arr[0][0];
    for (int i = 0; i < size; i++)
    {

        for (int j = 0; j < size; j++)
        {
            if (arr[i][j] > max)
                max = arr[i][j];
        }
    }
    cout << "max element: " << max << endl;
  }

int findMin2DArray(int **arr, int size)
  {
    int min = arr[0][0];
    for (int i = 0; i < size; i++)
    {

        for (int j = 0; j < size; j++)
        {
            if (arr[i][j] < min)
                min = arr[i][j];
        }
    }
    cout << "minimum element: " << min << endl;

  }

void copy2DArray(int **sourceArray, int **destinationArray, int size)
  {
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
         {
           destinationArray[i][j] = sourceArray[i][j];
         }
    }

    cout<<endl<<"coppy array is: "<<endl;
        for (int i = 0; i < size; i++)
    {

        for (int j = 0; j < size; j++)
         {
           cout << destinationArray[i][j] << " ";
         }
        cout<<endl;
    }
    cout<<endl;
  }
