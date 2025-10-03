// Constructors
/*Create a class Employee with data members id and salary
Write a parameterized constructor to initialize data members
Create two objects and display their details */

#include <iostream>
using namespace std;

class Employee
{
    string id;
    float salary;

public:
    Employee(string i_d, float sal)
    {
        id = i_d;
        salary = sal;
        cout << " id: " << id;
        cout << "\n Salary: " << salary << endl;
    }
};

int main()
{
    cout << " Details of the first employee:- " << endl;
    Employee e1("Leo_lm10", 25000);
    cout << "\n Details of the second employee:- " << endl;
    Employee e2("Chris_cr7", 24999);

    return 0;
}