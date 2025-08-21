// Swap two numbers(Call by value vs Call by reference)

#include<iostream>
using namespace std;

void callbv(int a, int b)
{
   int c=a;
    a=b;
    b=c;
}
void callbr(int *ptr1,int a,int b,int *ptr2)
{
    int x=*ptr1;
    *ptr1=*ptr2;
    *ptr2=x;
}
int main()
{
    int a,b,*ptr1,*ptr2;
    cout<<"\n Enter 2 numbers: ";
    cin>>a>>b;
    ptr1=&a;
    ptr2=&b;

    callbv(a,b);
    cout<<"\n After call by value , Swapped values are :- \n a= "<<a<<" and b= "<<b;
    
    callbr(ptr1,a,b,ptr2);
    cout<<"\n After call by reference , Swapped values are :- \n a= "<<*ptr1<<" and b= "<<*ptr2;

    return 0;

}