// Find maximum and minimum
/* Write a program to input n integers in an array and find the maximum and minimum element using a 
 function that takes an array pointer as a parameter */

#include<iostream>
using namespace std;

void max_min(int (*ptr)[], int *a, int *b,int x)
{
 int *abc= *ptr;
 *a=abc[0];
 *b=abc[0];
for(int i=1;i<x;i++)
{
    if(abc[i]>*b)
    {
        *b=abc[i];
    }
    if(abc[i]<*a)
    {    
        *a=abc[i];
    }
}
}
int main()
{
    int arr[]={37,49,23,19,98,87,44,72,68};
    int a,b;
    int x=sizeof(arr)/sizeof(arr[0]);
    int(*abc)[9]=&arr;            
    max_min(abc, &a, &b, x);
    cout<<"\n Minimum value in the array: "<<a<<" ";
    cout<<"\n Maximum value in the array: "<<b<<endl;
    
return 0;
}