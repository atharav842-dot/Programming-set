//Mini Project – Student Report Card
/*Create a class Report with:
• Data members: name, rollNo, marks[5].
• Member functions:
o input() → to take details from user.
o display() → to show details.
o calculateGrade() → to calculate total, percentage, and grade (A, B, C,
Fail).
Write a program to create multiple objects of Report and display the report card for
each student*/

#include <iostream>
#include <string>
using namespace std;

class Report {
private:
    string name;
    int rollNo;
    float marks[5];
    float total;
    float percentage;
    char grade;

public:
        void input() {
        cout << "\nEnter Student Name: ";
        getline(cin, name);
        
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        
        cout << "Enter marks for 5 subjects:\n";
        for (int i = 0; i < 5; i++) {
            cout << "Subject " << (i + 1) << ": ";
            cin >> marks[i];
        }
    }

    void calculateGrade() {
        total = 0;
        
        for (int i = 0; i < 5; i++) {
            total += marks[i];
        }
        
        percentage = (total / 500) * 100;
        
        if (percentage >= 90) {
            grade = 'A';
        } else if (percentage >= 75) {
            grade = 'B';
        } else if (percentage >= 50) {
            grade = 'C';
        } else {
            grade = 'F';
        }
    }

    void display() {
        cout << "\n----- REPORT CARD -----\n";
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "\nMarks:\n";
        
        for (int i = 0; i < 5; i++) {
            cout << "Subject " << (i + 1) << ": " << marks[i] << endl;
        }
        
        cout << "\nTotal: " << total << "/500" << endl;
        cout << "Percentage: " << percentage << "%" << endl;
        cout << "Grade: " << grade << endl;
        
        if (grade == 'F') {
            cout << "Result: FAIL\n";
        } else {
            cout << "Result: PASS\n";
        }
        cout << "-----------------------\n";
    }
};

int main() {
    
    Report r1;
    

        r1.input();
        r1.calculateGrade();
        r1.display();
      
    return 0;
}