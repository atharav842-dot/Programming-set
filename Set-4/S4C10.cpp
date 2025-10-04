/*Combination Example
Create a class Employee (id, salary). Add two functions:
• A member function updateSalary(Employee &e) that copies salary from another
employee.
• A non-member function swap(Employee *e1, Employee *e2) that swaps salaries
of two employees using pointers.*/

#include <iostream>
using namespace std;
class Employee
{
public:
    int id;
    float salary;
    Employee(int i, float s)
    {
        id = i;
        salary = s; 
    }
    void updateSalary(Employee &e)
    {
        salary = e.salary;
    }
    void display()  
    {
        cout << "Employee ID: " << id << ", Salary: " << salary << endl;
    }
};
void swap(Employee *e1, Employee *e2)
{
    float temp = e1->salary;
    e1->salary = e2->salary;
    e2->salary = temp;
}
int main()      
{
    Employee emp1(101, 50000);
    Employee emp2(102, 60000);
    cout << "Before updateSalary:\n";
    emp1.display();
    emp2.display();
    emp1.updateSalary(emp2);
    cout << "After emp1 updates salary from emp2:\n";
    emp1.display();
    emp2.display();
    swap(&emp1, &emp2);
    cout << "After swapping salaries:\n";
    emp1.display();
    emp2.display();
    return 0;
}