#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void speaK()
    {
        cout << "Animal speaks" << endl;
    }
};
class Dog : public Animal
{
public:
    void speaK()
    {
        cout << "Dog barks" << endl;
    }
};
class Cat : public Animal
{
public:
    void speaK()
    {
        cout << "Cat meows" << endl;
    }
};
int main()
{
    Animal *a1;
    Dog d1;
    Cat c1;

    a1 = &d1;
    a1->speaK();

    a1 = &c1;
    a1->speaK();

    return 0;
}
