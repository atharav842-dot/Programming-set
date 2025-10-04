/*Returning Object from Member Function
Define a class Matrix with a 2x2 array. Create a member function add(Matrix
&m) that returns the sum as a new Matrix object (by value*/

#include <iostream>
using namespace std;
class Matrix
{
public:
    int arr[2][2];
    Matrix(int a[2][2])
    {
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                arr[i][j] = a[i][j];
    }
    Matrix add(Matrix &m)
    {
        int sumArr[2][2];
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                sumArr[i][j] = arr[i][j] + m.arr[i][j];
        return Matrix(sumArr);
    }
    void display()
    {
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
                cout << arr[i][j] << " ";
            cout << endl;
        }
    }
};
int main()  
{
    int a1[2][2] = {{1, 2}, {3, 4}};
    int a2[2][2] = {{5, 6}, {7, 8}};
    Matrix m1(a1);
    Matrix m2(a2);
    cout << "Matrix 1:\n";
    m1.display();
    cout << "Matrix 2:\n";
    m2.display();
    Matrix m3 = m1.add(m2);
    cout << "Sum of Matrix 1 and Matrix 2:\n";
    m3.display();
    return 0;
}