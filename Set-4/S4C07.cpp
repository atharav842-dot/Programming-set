/*Call by Reference (Member Function)
Create a class Time (hours, minutes). Add a member function addTime(Time &t)
that adds t to the calling object (passed by reference)*/

#include <iostream>
using namespace std;
class Time
{
public:
    int hours, minutes;
    Time(int h, int m)
    {
        hours = h;
        minutes = m;
    }
    void addTime(Time &t)
    {
        minutes += t.minutes;
        hours += t.hours + minutes / 60;
        minutes %= 60;
    }
    void display()
    {
        cout << "Time: " << hours << " hours and " << minutes << " minutes\n";
    }
};
int main()
{
    Time t1(2, 50);
    Time t2(1, 30);
    cout << "Before adding:\n";
    t1.display();
    t2.display();
    t1.addTime(t2);
    cout << "After adding t2 to t1:\n";
    t1.display();
    return 0;   
}