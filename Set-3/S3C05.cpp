// Default and parameterized constructors
/* Create a class Circle with data member radius.
• Write a default constructor that sets radius to 1.
• Write a parameterized constructor that accepts radius from user.
• Add a function area() to calculate and display the area.
• Demonstrate both constructors in main() */

#include <iostream>
using namespace std;

class Circle
{
    float radius;

public:
    Circle()
    {
        radius = 1;
    }
    Circle(float r)
    {
        cout << "enter the radius of circle: ";
        cin >> r;
        radius = r;
    }
    float area()
    {
        cout << ", area of the circle: ";
        return (3.14 * radius * radius);
    }
};
int main()
{
    float r;
    cout << "If using default constructor ";
    Circle C1;
    cout << C1.area();
    cout << "\nIf using parameterized constructor, then ";
    Circle C2(r);
    cout << C2.area();

    return 0;
}