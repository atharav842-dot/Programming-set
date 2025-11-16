#include<iostream>
using namespace std;

class Person
{
    public:
    string name="Atharav Sharma";
};
class Employee:public Person
{
  public:
  long emp_id=241103022;
};
class Manager:public Employee
{
    public:
    float salary= 200000;
    void display()
    {
        cout<<"\n Name: "<<name;
        cout<<"\n employee id: "<<emp_id;
        cout<<"\n Salary: "<<salary;
    }
};
int main()
{
   Manager m1;
   m1.display();

   return 0;
}