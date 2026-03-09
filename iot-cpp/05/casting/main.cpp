#include <iostream>
using namespace std;
int main() {

    double x = 3.23;
    int y = 20;


    cout << x+y << endl;
    cout << static_cast<int>(x) + y << endl;
    cout << (int)(x)+y << endl;


    double num1 = +numeric_limits<double>::max();
    double num2 = -numeric_limits<double>::max();
    cout << num1*10  << endl;
    cout << num2*10  << endl;

    return 0;
}