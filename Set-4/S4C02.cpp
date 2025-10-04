/*Call by Reference
Create a class Rectangle (length, breadth). Write a non-member function
scale(Rectangle &r) that doubles the dimensions of the rectangle. Pass by
reference and show that changes affect the original object.*/

#include<iostream>
using namespace std;
class Rectangle {
    public:
    int length, breadth;
    public:
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }
};
void scale(Rectangle &r) {
    r.length *= 2;
    r.breadth *= 2;
    cout << "Inside scale function: Length = " << r.length << ", Breadth = " << r.breadth << "\n";
}
int main() {
    Rectangle rect(5, 10);
    cout << "Before scale function: Length = " << rect.length << ", Breadth = " << rect.breadth << "\n";
    scale(rect);
    cout << "After scale function: Length = " << rect.length << ", Breadth = " << rect.breadth << "\n";
    return 0;
}