#include<iostream>
using namespace std;

class Person
{
    public:
    string name="Atharav Sharma";
    int age=19;
};
class Student:public Person{
    protected:
    string course= "Computer Science";
    public:
    void display()
    {
        cout<<"name:"<<name<<endl;
        cout<<"age"<<age<<endl;
        cout<<"course:"<<course;
    }
};
int main()
{
    Student s1;
    s1.display();
   
    return 0;
}
