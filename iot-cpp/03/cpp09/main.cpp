#include <iostream>
using namespace std;
class refsome {

    public:
    int& ri;
    refsome(int &i): ri(i) {}
    void show() {
        cout << ri << endl;
    }
};
class constSome {
    public:
    const int value;
    constSome(int i): value(i) {}
    void show() {
        cout << value << endl;
    }
};


int main() {

    constSome cs(10);
    cs.show();

    int i = 5;
    refsome rs(i);
    rs.show();




    return 0;
}