//Transpose of a matrix
//Write a program to find the transpose of a given n x n matrix uing pointer notation

#include <iostream>
using namespace std;

void transpose_matrix(int *matrix, int *transpose, int size)
{
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            *(transpose + j * size + i) = *(matrix + i * size + j);
        }
    }
}

void print_matrix(int *matrix, int size)
{
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            cout << *(matrix + i * size + j) << " ";
        }
        cout << endl;
    }
}

int main()
{
    const int N = 10;
    int matrix[N][N];
    int transpose[N][N];
    int size;
    
    cout << "Enter size of N x N matrix: ";
    cin >> size;
    
    cout << "Enter matrix elements:\n";
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> *(*(matrix + i) + j);  
        }
    }
    
    transpose_matrix(&matrix[0][0], &transpose[0][0], size);
    
    cout << "\nOriginal Matrix:\n";
    print_matrix(&matrix[0][0], size);
    
    cout << "\nTranspose Matrix:\n";
    print_matrix(&transpose[0][0], size);
    
    return 0;
}