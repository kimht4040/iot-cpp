#include <iostream>

using namespace std;


int main() {
    try {
        int x;
        cin >> x;
        if (x==1) {
            throw "1";
        }
        else if (x==2) {
            throw 2.5;
        }

    }
    catch (int e) {
        cout<< "e : " << e << endl;
    }
    catch (double d) {
        cout << "d : "<< d << endl;
    }
    catch (const char* s) {
        cout << "s : " << s << endl;
    }
}