// Multiple objects
/* Create a class Book with data members title, author and price. Write a program to create three objects of Book, initialize them with user input, and display their details */

#include <iostream>
using namespace std;

class Book{
    string title;
    string author;
    float price;
    
    public:
    void input(string t, string a, float p)
    {
        title=t;
        author=a;
        price=p;
    }
    void display()
    {
        cout<<"1) Title: "<<title<<endl;
        cout<<"2) Author: "<<author<<endl;
        cout<<"3) Price: $"<<price<<endl;
    }
};

int main()
{
    cout<<"Details of the book are:- "<<endl;
    Book b1;
    b1.input("Atomic Habits","James Clear",15.39);
    b1.display();

return 0;
}