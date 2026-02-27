#include <iostream>
using namespace std;

int main() {
    int num1 = 10;
    int num2 = 20;
    const int* p1 = &num1;

    cout << num1 << endl;
    cout << *p1 << endl;

    int* const p2 = &num2;
    cout << num2 << endl;
    cout << *p2 << endl;


    *p2 = 20;
    cout << num2 << endl;
    cout << *p2 << endl;
    return 0;
}