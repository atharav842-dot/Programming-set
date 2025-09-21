//Display a 3D matrix
//Write a program to input and print elements of a 3 x 3 x 3 cube using only pointers (no arr[i][j][k] syntax)

#include <iostream>
using namespace std;

int main()
{
    int cube[3][3][3];
    int *ptr = &cube[0][0][0]; 
    
    cout << "Enter 27 elements for 3x3x3 cube:\n";
    
    for(int count = 0; count < 27; count++)  
    {
        cout << "Element " << count + 1 << ": ";
        cin >> *(ptr + count);
    }
    cout << "\nThe 3x3x3 cube elements are:\n";
    for(int count = 0; count < 27; count++)
    {
        cout << *(ptr + count) << " ";
        if((count + 1) % 9 == 0)      
            cout << "\n\n";                                                     
        else if((count + 1) % 3 == 0) 
            cout << "\n";
    }
    return 0;
}