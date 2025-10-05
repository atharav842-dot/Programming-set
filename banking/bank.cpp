// Creating a banking software system

#include <iostream>
using namespace std;

class Bank
{
public:
    string ACCholder;
    long ACCnum;
    float balance;
    string ifsc;
    Bank(string name, long num, float bal, string code)
    {
        ACCholder = name;
        ACCnum = num;
        balance = bal;
        ifsc = code;
    }
    void prev_balance(float bal)
    {
        balance = bal;
        cout << "Previous Balance set to: " << balance << endl;
    }
    void deposit(float amount)
    {
        balance += amount;
        cout << "Deposited: " << amount << ", New Balance: " << balance << endl;
    }
    void withdraw(float amount)
    {
        if (amount > balance)
        {
            cout << "Insufficient funds for withdrawal of: " << amount << endl;
        }
        else
        {
            balance -= amount;
            cout << "Withdrew: " << amount << ", New Balance: " << balance << endl;
        }
    }
    void display()
    {
        cout << "Account Holder: " << ACCholder << ", Account Number: " << ACCnum
             << ", Balance: " << balance << ", IFSC: " << ifsc << endl;
    }
};
int main()
{
    Bank acc("Atharav Sharma", 45662656235364, 50000.0, "DHFEU623TRHJDF67");
    cout << "     Welcome to the Banking Software System     " << endl;
    cout << "-----------------------------------------------" << endl;
    cout << " Choose an option: " << endl;
    cout << "1. Create Account" << endl;
    cout << "2. Deposit Money" << endl;
    cout << "3. Withdraw Money" << endl;
    cout << "4. Display Account Details" << endl;
    cout << "5. Exit" << endl;
    int choice;
    cout << "Enter your choice (1-5): ";
    cin >> choice;
    string name, code;
    long num;
    float bal;
    switch (choice)
    {
    case 1:
        cout << "Enter Account Holder Name: ";
        cin >> name;
        cin.ignore();
        cout << "Enter Account Number: ";
        cin >> num;
        cout << "Enter Initial Balance: ";
        cin >> bal;
        cout << "Enter IFSC Code: ";
        cin.ignore();
        getline(cin, code);
        if (code.empty())
            code = "DHFEU623TRHJDF67";
        acc = Bank(name, num, bal, code);
        cout << "Account Created Successfully!" << endl;
        break;
    case 2:
        float dep_amount;
        cout << "Enter amount to deposit: ";
        cin >> dep_amount;
        acc.deposit(dep_amount);
        break;
    case 3:
        float with_amount;
        cout << "Enter amount to withdraw: ";
        cin >> with_amount;
        acc.withdraw(with_amount);
        break;
    case 4:
        acc.display();
        break;
    case 5:
        cout << "Exitting the system. Thank you!" << endl;
        break;
    default:
        cout << "Invalid choice. Please try again." << endl;
    }
    return 0;
}