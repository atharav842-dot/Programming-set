#include<iostream>
using namespace std;

class Person
{
    public:
    string name="Atharav Sharma";
    int age=19;
};
class Teacher:virtual public Person // Considering the ambiguity, we use virtual keyword to correct the Diamond problem
{
    public:
    string hisTeacher="Tawqeer Sir";
};
class Student:virtual public Person // Considering the ambiguity, we use virtual keyword to correct the Diamond problem
{
    public:
    int rollNo=241103022;
};
class TA:public Teacher,public Student // As the TA class inherits from both the Teacher and Student class , it will create an ambiguous error
{
    public:
    void display()
    {
        cout<<"name: "<<name<<endl;
        cout<<"age: "<<age<<endl;
        cout<<"his teacher: "<<hisTeacher<<endl;
        cout<<"roll no: "<<rollNo;
    }
};
int main()
{
    TA t1;
    t1.display();
    return 0;
}