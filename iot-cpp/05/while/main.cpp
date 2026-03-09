#include <iomanip>
#include <iostream>
#include <stdbool.h>
using namespace std;
int main() {

    srand(time(NULL));
    cout << showpoint << rand() % 100 + 1 << endl;
    int num = rand() % 100 + 1;


    cout << num << endl;
    int x;
    while (true) {
        cout << "숫자 입력";
        cin >> x;
        if (x==num) {
            cout << "맞았습니다.";
            exit(0);
        }
        else if ( num > x) {
            cout << "더 큰 수 입니다. " << endl;
        }
        else {
            cout << "더 작은 수 입니다. " << endl;
        }

    }



    return 0;
}