#include <iostream>
using namespace std;

class Time {
private:
    int hour;
    int minute;
    int second;
public:
    Time() {
        cout << "기본생성자" << endl;
    }
    Time(int h, int m, int s): hour(h), minute(m), second(s) {}

    void setTime(int h, int m, int s) {
        hour = h;
        minute = m;
        second = s;
    }
    void printTime() {
        cout << hour << ":" << minute << ":" << second << endl;
    }

};




int main() {

    Time t(16,45,10);
    t.printTime();


    return 0;
}