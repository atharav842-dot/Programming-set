
//Pointer to Array of Pointers 
/*Create an array of string pointers (e.g., names of 5 students) and print them using  
pointer notation */





#include <iostream>
using namespace std;

int main() {
   
    const char* students[5] = {
        "Abc",
        "def", 
        "ghi",
        "jkl",
        "mno"
    };
    
    cout << "Student names using pointer notation:" << endl;
    
    for(int i = 0; i < 5; i++) {
        cout << "Student " << i+1 << ": " << *(students + i) << endl;
    }
    
    return 0;
}