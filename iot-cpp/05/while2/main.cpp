#include <iostream>
#include <thread>
#include <chrono>
using namespace std;
int main() {

    for (int i =10 ; i > 0; i--) {
        cout << i  << endl;
        this_thread::sleep_for(chrono::seconds(1));
    }

    cout << "strat"<< endl;

    return 0;
}