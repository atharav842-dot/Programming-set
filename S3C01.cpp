// Basic Class Definition
/*Create a class Student with two data members: rollNo and name. Write a program to:
1.Create an object of the class
2.Assign values to its data members
3.Display the values */

#include <iostream>
using namespace std;

class Student
{
public:
    // Data members declared
    long rollNo;
    string name;

    // assigning values
    void assign(long r_no, string n1)
    {
        rollNo = r_no;
        name = n1;
    }

    // displaying values
    void display()
    {
        cout << "\n Roll no: " << rollNo;
        cout << "\n Name: " << name;
    }
};

int main()
{
    cout<<"\n Details of the student are:- ";
    // object created
    Student st;
    st.assign(241103022, "Atharav Sharma");
    st.display();

    return 0;
}