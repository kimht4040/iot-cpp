#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s;

    s.insert(10);
    s.insert(20);
    s.insert(30);

    for (int x:s) {
        cout << x << endl;
    }
    if (s.find(10) != s.end()) {
        cout << "in 10" << endl;
    }
    if (s.find(20) != s.end()) {
        cout << "in 20" << endl;
    }
    set<int, greater<int>> s2;
    s2.insert(20);
    s2.insert(30);
    for (int x:s2) {
        cout << x << endl;

    }


    return 0;
}