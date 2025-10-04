/*Call by Value (Member Function)
Create a class Box (length, width, height). Add a member function compare(Box
b) that compares the calling object with b (passed by value) and prints which is
larger in volume.
*/

#include <iostream>
using namespace std;
class Box
{
public:
    float length, width, height;
    Box(float l, float w, float h)
    {
        length = l;
        width = w;
        height = h;
    }
    void compare(Box b)
    {
        float vol1 = length * width * height;
        float vol2 = b.length * b.width * b.height;
        if (vol1 > vol2)
            cout << "Calling object has larger volume: " << vol1 << endl;
        else if (vol1 < vol2)
            cout << "Passed object has larger volume: " << vol2 << endl;
        else
            cout << "Both boxes have equal volume: " << vol1 << endl;
    }
};
int main()
{
    Box box1(2, 3, 4);
    Box box2(3, 4, 5);
    box1.compare(box2);
    return 0;
}