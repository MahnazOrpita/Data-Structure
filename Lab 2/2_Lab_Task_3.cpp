#include<iostream>
using namespace std;

int main()
{
    int Array_1[12], Array_2[12];
    int i, j, a;

    for(i=0; i<12; i++)
    {
        cout << i+1 << " element: ";
        cin >> Array_1[i];
        Array_2[i]=-1;
    }

    for(i=0; i<12; i++)
    {
        a=1;
        for(j=i+1; j<12; j++)
        {
            if(Array_1[i]==Array_1[j])
            {
                a++;
                Array_2[j]=0;
            }
        }
        if(Array_2[i]!=0)
        {
            Array_2[i]=a;
        }
    }
    for(i=0; i<12; i++)
    {
        if(Array_2[i]!=0)
            cout << Array_1[i] << " occurs = " << Array_2[i] << " times" << endl;
    }
    return 0;
}
