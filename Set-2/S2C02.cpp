#include <iostream>
using namespace std;

void reverseArray(int* start, int n)
 {
    int* end = start + n - 1;
    while (start < end)
 {
       int temp = *start;
        *start = *end;
        *end = temp
        start++;
        end--;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << " \n ";

    reverseArray(arr, n);

    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
