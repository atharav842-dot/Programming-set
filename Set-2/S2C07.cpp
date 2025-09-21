//Sum of all elements#include <iostream>
//Input elements of 2x2x2 3D array and find the sum of all elements using pointer arithmetic.

#include <iostream>
 using namespace std;

int main()
{
    int arr[2][2][2];  
    int sum = 0;
    
    cout << "Enter 8 elements for 2x2x2 array:\n";
    
    int *ptr = &arr[0][0][0];  
    
    for(int i = 0; i < 8; i++)  
    {
        cout << "Element " << i+1 << ": ";
        cin >> *(ptr + i);      
        sum += *(ptr + i);      
    }
    
    cout << "Sum of all elements: " << sum << endl;
    
    return 0;
}