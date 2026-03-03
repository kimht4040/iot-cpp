#include <iostream>
using namespace std;
int func(int n) {
     n++;
    return n;
}
int& func1(int r) {
    r++;
    return r;
}




int main() {
    int num = 10;
    int ret = func(num);
    cout << ret << endl;

    int& ref = func1(num);
    cout << ref << endl;

    return 0;
}