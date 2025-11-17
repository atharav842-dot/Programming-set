#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string brand;
    double price;
    
    Car(string b, double p) {
        brand = b;
        price = p;
    }
    
    Car(const Car &c) {
        brand = c.brand;
        price = c.price;
        cout << "Copy constructor called!" << endl;
    }
    
        void display() {
        cout << "Brand: " << brand << ", Price: $" << price << endl;
    }
};

int main() {
    
    Car car1("Toyota", 25000);
    cout << "Original Car: ";
    car1.display();
    
    
    Car car2 = car1;
    cout << "Copied Car: ";
    car2.display();
    
    return 0;
}