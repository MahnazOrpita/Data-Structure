#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int matrix1[3][3] = {{12, 13, 14}, {15, 16, 17}, {18, 19, 20}};
    int matrix2[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matrix3[3][3] = {{101, 104, 107}, {102, 105, 108}, {103, 106, 109}};

    int i, j, sum;

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            sum = matrix1[i][j] + matrix2[i][j] + matrix3[i][j];
            cout << sum << " ";
        }
        sum = 0;
        cout << endl;
    }
    getch();
}


