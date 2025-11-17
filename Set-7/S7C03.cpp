#include<iostream>
using namespace std;

class MinMax{
    public:
    template <class T1, class T2>
    MinMax(T1 minVal, T2 maxVal)
    {
        cout << "Minimum: " << minVal << endl;
        cout << "Maximum: " << maxVal << endl;

    }


};
int main(){
    int minInt = 10, maxInt = 100;
    double minDouble = 5.5, maxDouble = 99.9;

    cout << "For Integer values:" << endl;
    MinMax minmax_i(minInt, maxInt);

    cout << "For Double values:" << endl;
    MinMax minmax_d(minDouble, maxDouble);

    return 0;
}