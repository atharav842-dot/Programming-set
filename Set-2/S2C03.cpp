//Sum of odd and even elements
/* Given an array of integers, write a program to find the sum of even and odd elements separately using pointer
arithmetic */
#include <iostream>
using namespace std;

int main() 
{
    int arr[10]={7,3,6,2,9,1,5,8,4};
    int i;
    int *ptr=arr;
    int sum_o=0;
    int sum_e=0;
    for(i=0;i<9;i++)
    {
        if(*ptr%2==0)
        {
            sum_e+=*ptr;
            ptr++;
        }
        else 
        {
            sum_o+=*ptr;
            ptr++;
        }
    }
    cout<<"\n Sum of even elements: "<<sum_e;
    cout<<"\n Sum of odd elements: "<<sum_o<<endl;
    
    return 0;
}