#include<iostream>
#include"arrayImplement.h"
using namespace std;
int main()
{
    int arr[5];

    input1DArray(arr,5);
    print1DArray(arr,5);
    reversePrint1DArray(arr,5);
    searchIn1DArray(arr,5,10);
    findMax1DArray(arr,5);
    findMin1DArray(arr,5);
    searchIn1DArray(arr,5,10);

    cout<<endl;


     int **array2D = new int *[3];

      for (int i = 0; i < 3; i++)
       {
        array2D[i] = new int[3];
       }

     int **copy2d= new int *[3];

       for (int i = 0; i < 3; i++)
        {
        copy2d[i] = new int[3];
        }

    input2DArray(array2D,3);
    print2DArray(array2D,3);
    findMax2DArray(array2D,3);
    findMin2DArray(array2D,3);
    reversePrint2DArray(array2D,3);
    searchIn2DArray(array2D,3,5);
    copy2DArray(array2D,copy2d,3);

}
