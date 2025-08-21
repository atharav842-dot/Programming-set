// Printing address and value of a variable
#include<iostream>
using namespace std;
int main()
{
    int a=5;
    int *b=&a;
    
    cout<<" \n Value of a= "<<a;
    cout<<"\n Address of a= "<<b;
    cout<<"\n Value at address= "<<*b;
    cout<<"\n Value of pointer= "<<b;

    return 0;
}