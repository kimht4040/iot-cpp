#include <iostream>
using namespace std;
int main() {
    int k =0;

    for (int i = 2; i < 10; i++) {
        for (int j = 1; j < 10; j++) {
            for (k =0;  k< 3; k++) {
                if (i+k >=10) {
                    break;
                }
                cout << k+i << " * " << j << " = " << (k+i) * j << "\t";

            }
            cout << endl;

        }
        cout << endl;
        i+=2;


    }






    return 0;
}