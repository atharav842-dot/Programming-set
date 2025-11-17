// Destructor
/*Create a class FileHandler with a constructor that prints "File opened" and a destructor
that prints "File closed".
• Create an object in main() and observe the order of constructor and destructor
calls */

#include <iostream>
using namespace std;

class FileHandler
{
public:
    FileHandler()
    {
        cout << "File opened" << endl;
    }

    ~FileHandler()
    {
        cout << "File closed" << endl;
    }
};

int main()
{
    cout << "Program started" << endl;
    FileHandler file;
    cout << "Inside main function" << endl;
    cout << "End of main function" << endl;

    return 0;
}