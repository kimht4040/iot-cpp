#include <iostream>
using namespace std;
int func(int n = 5) {
    return n;
}
int main() {

    cout << func(3) << endl;
    return 0;
}