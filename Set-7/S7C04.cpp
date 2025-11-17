#include<iostream>
using namespace std;

template<typename T>
void scaleVECTOR(T arr[], int n, T factor)
{
    for(int i = 0; i < n; i++){
        arr[i] = arr[i] * factor;
    }
}
int main()
{
    double arr[5];int n;
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"Enter elements of array: ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    double factor;
    cout<<"Enter scaling factor: ";
    cin>>factor;
    scaleVECTOR<double>(arr, n, factor);
    cout<<"Scaled array elements are: ";
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}