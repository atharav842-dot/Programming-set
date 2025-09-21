//Matrix Addition
//Input two 2D matrices (size m*n) and find their sum. Pass the 2D arrays to a function using pointers

#include <iostream>
using namespace std;

void mat_add(int *a, int *b, int *sum, int m, int n)
{
    for(int i = 0; i < m * n; i++)  // Treat 2D array as 1D
    {
        *(sum + i) = *(a + i) + *(b + i);
    }
}

int main()
{
    int a[10][10], b[10][10], sum[10][10];
    int m, n;
    
    cout << "Enter number of rows: ";
    cin >> m;
    cout << "Enter number of columns: ";
    cin >> n;
    
    cout << "Enter 1st matrix elements:\n";
    int *ptr_a = &a[0][0];  
    for(int i = 0; i < m * n; i++)
    {
        cin >> *(ptr_a + i);
    }
    
    cout << "Enter 2nd matrix elements:\n";
    int *ptr_b = &b[0][0];  
    for(int i = 0; i < m * n; i++)
    {
        cin >> *(ptr_b + i);
    }
    
    mat_add(&a[0][0], &b[0][0], &sum[0][0], m, n);
    
    cout << "The matrix after addition:\n";
    int *ptr_sum = &sum[0][0];
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << *(ptr_sum + i * n + j) << " ";  
        }
        cout << endl;
    }
    
    return 0;
}