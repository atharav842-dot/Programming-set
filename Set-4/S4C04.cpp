/*Return Object by Value
Write a class Complex (real, imag). Create a non-member function add(Complex
c1, Complex c2) that returns a new object by value*/

#include <iostream>
using namespace std;
class Complex
{
public:
    float real, imag;

public:
    Complex(float r = 0, float i = 0)
    {
        real = r;
        imag = i;
    }
};
Complex add(Complex c1, Complex c2)
{
    Complex c3;
    c3.real = c1.real + c2.real;
    c3.imag = c1.imag + c2.imag;
    return c3;
}
int main()
{
    Complex c1(2, 3), c2(4, 5);
    Complex c3 = add(c1, c2);
    cout << "c1: " << c1.real << " + " << c1.imag << "i\n";
    cout << "c2: " << c2.real << " + " << c2.imag << "i\n";
    cout << "c3 (c1 + c2): " << c3.real << " + " << c3.imag << "i\n";
    return 0;
}