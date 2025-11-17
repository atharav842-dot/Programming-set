#include<iostream>
using namespace std;

template<typename T>
T sumArray(T arr[], int n)
{
    T sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int arr[5];int n;
    cout<<"Enter size of array: ";
    
    cin>>n;
    cout<<"Enter elements of array: ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int result = sumArray<int>(arr, n);
    cout<<"Sum of array elements is: "<<result<<endl;
    return 0;
}