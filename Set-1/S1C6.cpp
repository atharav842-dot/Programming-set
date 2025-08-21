// Access array elements using pointers

#include<iostream>
using namespace std;

int main()
{
    int arr[5],*ptr,i;
    cout<<" Enter the array elements :-"<<endl;
    for(i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    ptr=arr;
       for(i=0;i<5;i++)
       {
          cout<<*ptr<<" ";
          ptr++;
       }
    return 0;
}