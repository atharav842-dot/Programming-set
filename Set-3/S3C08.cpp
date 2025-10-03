/* Object as Function Argument
Create a class Complex with two data members real and imag.
• Define a function add(Complex c) that adds the current object with object c
and returns the result.
• In main(), create two complex numbers and add them */

#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:

    Complex(double r = 0.0, double i = 0.0) {
        real = r;
        imag = i;
    }

    Complex add(Complex c) {
        Complex result;
        result.real = real + c.real;
        result.imag = imag + c.imag;
        return result;
    }

    void display() {
        if (imag >= 0)
            cout << real << " + " << imag << "i" << endl;
        else
            cout << real << " - " << -imag << "i" << endl;
    }
};

int main() {

    Complex c1(3.5, 2.5);
    Complex c2(1.5, 4.5);

    cout << "First Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    Complex c3 = c1.add(c2);

    cout << "Sum: ";
    c3.display();

    return 0;
}