/*Mixed Parameters
Define a class Student (name, marks). Write a non-member function
compare(const Student &s1, const Student &s2) that takes objects by reference
and returns the one with higher marks by value.*/

#include <iostream>
#include <string>
using namespace std;    

class Student
{
public:
    string name;
    float marks;
    Student(string n, float m)
    {
        name = n;
        marks = m;
    }
};
Student compare(const Student &s1, const Student &s2)
{
    if (s1.marks > s2.marks)
        return s1;
    else
        return s2;
}

int main()
{
    Student s1("Rancho", 90);
    Student s2("Chatur", 85);
    Student better= compare(s1, s2);
    cout << "Student with higher marks: " << better.name << endl;
    cout << "Marks: " << better.marks << endl;
    return 0;
}
