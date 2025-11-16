
#include <iostream>
using namespace std;

class Vector2D {
public:
    double x, y;
    
    Vector2D(double x = 0, double y = 0) : x(x), y(y) {}
    
    Vector2D operator+(const Vector2D& v) {
        return Vector2D(x + v.x, y + v.y);
    }
    
    void print() {
        cout << "(" << x << ", " << y << ")";
    }
};

class Vector3D : public Vector2D {
public:
    double z;
    
    Vector3D(double x = 0, double y = 0, double z = 0) 
        : Vector2D(x, y), z(z) {}
    
    Vector3D operator+(const Vector3D& v) {
        // Reuse Vector2D's operator+ for x and y
        Vector2D base = Vector2D::operator+(v);
        return Vector3D(base.x, base.y, z + v.z);
    }
    
    void print() {
        cout << "(" << x << ", " << y << ", " << z << ")";
    }
};

int main() {
    Vector2D v1(1, 2), v2(3, 4);
    Vector2D v3 = v1 + v2;
    v1.print(); cout << " + "; v2.print(); cout << " = "; v3.print(); cout << endl;
    
    Vector3D v4(1, 2, 3), v5(4, 5, 6);
    Vector3D v6 = v4 + v5;
    v4.print(); cout << " + "; v5.print(); cout << " = "; v6.print(); cout << endl;
    
    return 0;
}