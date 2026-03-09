#include <iostream>

using namespace std;


int main() {

    int n1 = 1;
    int n2 = 2;
    n1++;
    n1 = n1+1;
    n1 +=1;
    cout << n1 << endl;
    int sum = n1 + n2;
    cout << sum << endl;


    cout << hex << 255 << endl;
    cout << dec << 255 << endl;
    cout << oct << 255 << endl;


    bool b1 = false;
    cout << b1 << endl;
    cout << boolalpha << b1 << endl;
    double z = 1232;
    cout << z << endl;
    cout << showpoint << z << endl;






    return 0;
}