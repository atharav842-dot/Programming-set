/* Returning Object from Function
Create a class Time with data members hours and minutes.
• Write a function addTime(Time t) that adds two time objects and returns a new
object.
• Ensure minutes are properly converted into hours if they exceed 60 */

#include <iostream>
using namespace std;

class Time
{
private:
    int hours;
    int minutes;

public:
    Time(int h = 0, int m = 0)
    {
        hours = h;
        minutes = m;
        normalize();
    }

    void normalize()
    {
        if (minutes >= 60)
        {
            hours += minutes / 60;
            minutes = minutes % 60;
        }
    }

    Time addTime(Time t)
    {
        Time result;
        result.hours = hours + t.hours;
        result.minutes = minutes + t.minutes;

        result.normalize();

        return result;
    }

    void display()
    {
        cout << hours << " hours and " << minutes << " minutes" << endl;
    }
};

int main()
{
    // Create two time objects
    Time t1(2, 45);
    Time t2(3, 30);

    cout << "First Time: ";
    t1.display();

    cout << "Second Time: ";
    t2.display();

    Time t3 = t1.addTime(t2);

    cout << "Total Time: ";
    t3.display();

    cout << "\n--- Testing with minutes exceeding 60 ---\n";

    Time t4(5, 50);
    Time t5(2, 40);

    cout << "First Time: ";
    t4.display();

    cout << "Second Time: ";
    t5.display();

    Time t6 = t4.addTime(t5);

    cout << "Total Time: ";
    t6.display();

    return 0;
}