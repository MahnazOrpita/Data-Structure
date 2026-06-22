#include<iostream>
using namespace std;
void ascending(int arr[],int size)
{
    for(int pos=0;pos<size;pos++)
    {
        for(int check=pos+1;check<size;check++)
        {
            if(arr[check]<arr[pos])
            {
                int temp=arr[check];
                arr[check]=arr[pos];
                arr[pos]=temp;
            }
        }
    }
}

int main()
{

    int size1,size2;
    cout<<"Enter the size for first array.Size should be more than five.: ";
    cin>>size1;

     cout<<"Enter the size for second array. Size should be more than five.: ";
    cin>>size2;

    int array1[size1],array2[size2],array3[size1+size2];

    cout<<endl<<"Enter the elements for first array"<<endl;
    for(int i=0;i<size1;i++)
    {
        cin>>array1[i];
    }

    cout<<endl;
    cout<<"Enter the elements for second array"<<endl;
    for(int i=0;i<size2;i++)
    {
        cin>>array2[i];
    }

    // marging array

   int j=0;
    for(int i=0;i<size1+size2;i++)
    {
        if(i<size1)
        {
            array3[i]=array1[i];
        }

        else
        {
            array3[i]=array2[j];
            j++;
        }
    }
    ascending(array3,size1+size2);

    cout << "\nThe new array with even elements: ";
    for (int i = 0; i < size1+size2; i++)
    {
        if(array3[i]%2==0)
            {
                cout << array3[i] <<" ";
            }

}
 return 0;
}

