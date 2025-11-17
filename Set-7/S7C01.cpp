#include<iostream>
using namespace std;

template <typename T>

void printTwo(T a, T b){
    cout << a << " " << b << endl;
}
int main(){
    cout<<"numbers are:";
    printTwo<int>(5, 7);
    return 0;
}
