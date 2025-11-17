#include<iostream>
using namespace std;

template <class T>

class Box{
    T value;
    public:
    void setdata(T val){
        value = val;
    }
    void getdata(){
        cout<<"\n Value is: "<<value<<endl;
    }
};
int main()
{
    Box<string> box1;
    string str="Hello, World!";
    box1.setdata(str);
    box1.getdata();
    return 0;
}