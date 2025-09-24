//Dynamic Array Allocation 
/*Write a cpp program to dynamically allocate memory for an integer array of size n,  
input elements, and find their average using pointers.*/

#include <iostream>
using namespace std;

int main() {
    int n;
  
    cout << "Enter array size: ";
    cin >> n;
    
    int* arr = new int[n];
    
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += *(arr + i);
    }
   
    double average = (double)sum / n;
    
    cout << "Average = " << average << endl;
 
    delete[] arr;
    
    return 0;
}