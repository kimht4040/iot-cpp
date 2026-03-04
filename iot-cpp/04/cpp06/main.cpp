#include <iostream>
class Time {
    int hour;
    int minute;
    int second;
    public:
    Time() {}
    Time(int abssec) {
        hour = abssec/3600;
        minute = (abssec / 60)% 60;
        second = abssec % 60;
    }
    void outTime() {
        std::cout << hour << ":" << minute << ":" << second << std::endl;
    }

};


int main() {

    Time t{29392};
    t.outTime();



    return 0;
}