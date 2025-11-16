#include<iostream>
using namespace std;

class Teacher{
    public:
    string subject;
};
class Researcher{
    public:
    string area_of_research;
};
class TeachingAssistant: public Teacher, public Researcher{
    public:
    void display(){
        cout<<"Subject: "<<subject<<endl;
        cout<<"Area of Research: "<<area_of_research<<endl;
    }
};
int main()
{
    TeachingAssistant ta1;
    ta1.subject="Computer Science";
    ta1.area_of_research="Artificial Intelligence";
    ta1.display();
    return 0;
}