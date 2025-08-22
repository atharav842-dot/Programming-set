// String length using pointer traversal

#include<iostream>
using namespace std;

int strLength(char *s)
{
    int length=0;
    while(*s != '\0')
    {
        length++;
        *s++;
    }
    return length;
}
int main()
{
    char s[]= "CR7*LM10";
    int i;
    i=strLength(s);
    cout<<" Length of the string= "<<i<<endl;

    return 0;
}

