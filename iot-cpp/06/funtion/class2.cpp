#include <iostream>
using namespace std;
class circle {
    static double radius;
    public:
        double getRadius() { //getter
            return radius;
        }
        void setRadius(double r) {//setter
            radius = r;
        }
    static double getArea() {
            return radius*radius*3.14;
        }
};
double circle::radius =0;

int main() {

    circle c;
    c.setRadius(10);
    cout << c.getRadius() << endl;
    cout << c.getArea() << endl;




    return 0;
}