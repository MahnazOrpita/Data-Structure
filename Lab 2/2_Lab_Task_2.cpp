#include<iostream>
using namespace std;
int main()
{

   int arr[7];
   int i;

   for(i=0; i<7; i++)
    {
        cout << i+1 << " element: ";
        cin >> arr[i];
    }

   int x;

    int count=0;

    cout<<"Input The Value : \n";
    cin>>x;

   for(int i=0;i<7;i++)

   {
           if(arr[i]==x)
           count++;
   }

   cout<<"The number occurs "<<count<<" times in the array";
   cout<<endl;

    return 0;
}
