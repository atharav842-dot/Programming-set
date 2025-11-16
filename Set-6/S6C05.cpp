#include<iostream>
using namespace std;

class Area
{
    protected:
    void area()
    {
    }
};
class Rectangle:public Area
{
    private:
    int length=5;
    int breadth=10;
    public:
    void area()
    {   
        int area= length*breadth;
        cout<<"Area of Rectangle:"<<area<<endl;
    }
};
class Circle:public Area
{
    private:
    int radius=7;
    public:
    void area()
    {
        float area= 3.14*radius*radius;
        cout<<"Area of Circle:"<<area<<endl;
    }
};
int main()
{
    Rectangle r1;
    r1.area();
    Circle c1;
    c1.area();
    return 0;
}