// Find maximum and minimum
/* Write a program to input n integers in an array and find the maximum and minimum element using a 
 function that takes an array pointer as a parameter */

#include<iostream>
using namespace std;

void max_min(int arr[], int *a, int *b,int x)
{
*a=*b=arr[0];
for(int i=1;i<x;i++)
{
    if(arr[i]>*b)
    {
        *b=arr[i];
    }
    if(arr[i]<*a)
    {    
        *a=arr[i];
    }
}
}
int main()
{
    int arr[]={37,49,23,19,98,87,44,72,68};
    int a,b;
    int x=sizeof(arr)/sizeof(arr[0]);
    max_min(arr, &a, &b, x);
    cout<<"\n Minimum value in the array: "<<a<<" ";
    cout<<"\n Maximum value in the array: "<<b<<endl;
    
return 0;
}