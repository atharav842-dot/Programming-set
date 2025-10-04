/* Call by Value
Write a program with a class Point (x, y). Create a non-member function
display(Point p) that takes a Point object by value and prints its coordinates.
Observe how changes inside the function do not affect the original object.*/

#include <iostream>
using namespace std;
class Point {
    public:
    int x,y;
    public:
    Point(int a, int b) {
        x = a;
        y = b;
    }
};
void display(Point p) {
    p.x=10;
    p.y=20;
    cout << "Inside display function: (" << p.x << ", " << p.y << ")\n";
}
int main() {
    Point pt(1, 2);
    cout << "Before display function: (" << pt.x << ", " << pt.y << ")\n";
    display(pt);
    cout << "After display function: (" << pt.x << ", " << pt.y << ")\n";
    return 0;
}
