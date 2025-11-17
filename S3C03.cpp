// member functions outside class
/* Create a class Rectangle with data members length and width.
Define a member function area() outside the class (using scope resolution operator)
In main() , create an object and display its area. */

#include <iostream>
using namespace std;

class Rectangle
{
    float length;
    float width;

public:
    void input(float l, float w)
    {
        length = l;
        width = w;
    }
    void area(float, float);
};

//using scope resolution operator
void Rectangle::area(float length, float width)
{
    float ar_result;
    ar_result = length * width;
    cout << ar_result << endl;
}
int main()
{
    Rectangle r1;
    r1.input(10.5, 8.25);
    cout << "\n Area of the rectangle= ";
    r1.area(10.5, 8.25);

    return 0;
}