/*Call by Pointer (Member Function)
Define a class Account (balance). Add a member function transfer(Account *acc,
int amount) that transfers money from the calling object to the account pointed
by acc*/

#include <iostream>
using namespace std;
class Account
{
public:
    float balance;
    Account(float b)
    {
        balance = b;
    }
    void transfer(Account *acc, int amount)
    {
        if (amount > balance)
        {
            cout << "Insufficient balance for transfer.\n";
            return;
        }
        
        balance-=amount;
        acc->balance += amount;
        cout << "Transferred " << amount << " units.\n";
    }
    void display()
    {
        cout << "Balance: " << balance << " units\n";
    }
};
int main()
{
    Account acc1(1000);
    Account acc2(500);
    cout << "Before transfer:\n";
    acc1.display();
    acc2.display();
    acc1.transfer(&acc2, 300);
    cout << "After transfer:\n";
    acc1.display();
    acc2.display();
    return 0;
}