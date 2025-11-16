#include<iostream>
using namespace std;

class Employee{
    protected:
    long id;
    float salary;
};
class Manager:public Employee{
    public:
    void display()
    {
        id=241103022;
        salary=45000;
        cout<<"ID: "<<id<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};
int main()
{
    Manager ab;
    ab.display();

    return 0;
}