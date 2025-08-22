// Pointer to array vs Array of pointers

#include<iostream>
using namespace std;

int main()
{
    int i;
    int arr[5]={1,2,3,4,5};
    int (*ptr1)[5]=&arr;
    cout<<" Accessing elements using a pointer to array , we get : ";
    for(int i=0;i<5;i++)
    {
        cout<<(*ptr1)[i]<<" ";
        (*ptr1)[i]++;
    }
    int a=11,b=22,c=33,d=44,e=55;
    int *ptr2[5]={&a,&b,&c,&d,&e};
    cout<<"\n Accessing elements using an array of pointers, we get: ";
    for(i=0;i<5;i++)
    {
        cout<<*ptr2[i]<<" ";
        *ptr2[i]++;
    }
    cout<<endl;
    return 0;
}