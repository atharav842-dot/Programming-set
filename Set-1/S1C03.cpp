// Increment a variable using pointer parameter

#include<iostream>
using namespace std;

void increment(int *p);
int main()
{
    int *p,var=5;
    p=&var;
    increment(p);
    cout<<" \n Address and value after increment :-\n Address= "<<p<<" Value= "<<*p;
    return 0;
}
void increment(int *p)
{
    cout<<"\n Address and value before increment :-\n Address= "<<p<<" Value= "<<*p<<endl;
    *p=*p+1;
}

