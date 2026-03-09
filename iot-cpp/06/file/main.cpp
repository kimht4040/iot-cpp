#include <iostream>

using namespace std;
class Circle {
    private:
    double radius;
    public:
    double getradius() const {return radius;}
};
class A {
    public:
    int x;
    A(int value) {
        x = value;
        cout << "nomal" << endl;
    }
    A(const A& other) {
        x = other.x;
        cout << "copy" << endl;
    }
};
class b {
private:
    b(){}
public:
    b(const b& other)  = delete;
    b& operator=(const b& other) = delete;
    static b& getInstance() {
        static b instance;
        return instance;
    }
};
int main() {
    b& s1 = b::getInstance();
    b& s2 = b::getInstance();
    cout << &s1 << endl;
    cout << &s2 << endl;

    return 0;
}