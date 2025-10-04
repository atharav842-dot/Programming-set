/*Call by Pointer
Create a class Circle (radius). Write a non-member function
increaseRadius(Circle *c) that increases radius by 5 units. Demonstrate passing
the object by pointer.*/

#include <iostream>
using namespace std;
class Circle
{
public:
    float radius;

public:
    Circle(float r)
    {
        radius = r;
    }
};
void increaseRadius(Circle *c)
{
    c->radius += 5;
    cout << "Inside  function: Radius = " << c->radius << "\n";
}
int main()
{
    Circle circ(10);
    cout << "Before  function: Radius = " << circ.radius << "\n";
    increaseRadius(&circ);
    cout << "After  function: Radius = " << circ.radius << "\n";
    return 0;
}