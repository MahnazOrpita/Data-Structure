#include<iostream>
using namespace std;

int main()
{
    int Array_1[6] = {11, 3, 6, 8, 1, 5};
    int Array_2[6] = {12, 9, 4, 2, 10, 7};
    int Array_3[12];

    int i, j, k;

    for(i=0;i<6; i++)
        {
            Array_3[i] = Array_1[i];
         }
     for(j=0;j<6; j++)
        {
            Array_3[i] = Array_2[j];
            i++;
        }

   for(i=0;i<12; i++)
        {
           for(k=0;k<11;k++)
             {

                if(Array_3[k]<=Array_3[k+1])
                 {
                   j=Array_3[k+1];
                   Array_3[k+1]=Array_3[k];
                   Array_3[k]=j;
                 }
              }
         }

    for(i=0; i<12; i++)
    {
        cout << Array_3[i] << " ";
    }

    return 0;
}

