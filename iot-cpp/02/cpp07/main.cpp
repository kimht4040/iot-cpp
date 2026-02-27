#include <iostream>
using namespace std;
int main() {
    int num = 12;

    int *ptr = &num;
    int **ptr2 = &ptr;

    int *(&pref) = ptr;
    int **(&pref2) = ptr2;


    cout << num << endl;
    cout << *pref << endl;
    cout << **pref2 << endl;


    return 0;
}