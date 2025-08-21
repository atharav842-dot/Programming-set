// Sum of two numbers using pointers

#include<iostream>
using namespace std;

int sum(int *p,int *q)
{
    int sum_ptr=*p+*q;
    
    return sum_ptr;
}
int main()
{
    int a,b,*ptr1,*ptr2,c;
    cout<<"\n Enter two numbers:- "<<endl;
    cin>>a>>b;
    ptr1=&a;
    ptr2=&b;
    c=sum(ptr1,ptr2);
    cout<<"\n Sum using pointers= "<<c<<endl;
    
    return 0;
}