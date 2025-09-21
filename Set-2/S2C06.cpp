//Row-wise maximum
//Given a 2D array of integers, write a program to find the maximum element of each row using pointers

#include <iostream>
using namespace std;

int main()
{
    int matrix[5][5];
    int rows, cols;
    
    cout << "Enter rows and columns: ";
    cin >> rows >> cols;
    
    cout << "Enter matrix elements:\n";
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cin >> *(matrix[i] + j);  
        }
    }
    
    cout << "\n Row maximums:-\n ";
    for(int i = 0; i < rows; i++)
    {
        int max = *matrix[i];  
        
        for(int j = 1; j < cols; j++)
        {
            if(*(matrix[i] + j) > max)  
                        {
                max = *(matrix[i] + j);
            }
        }
        
        cout << "Row " << i << ": " << max << endl;
    }
    
    return 0;
}