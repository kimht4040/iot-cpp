#include <iostream>

using namespace std;

class Human {
public:
    char name[20];
    int age;
    char job[20];
    void show_data() {
        cout << "이름: " << name << " 나이: " << age <<" 직업: " << job<< endl;
    }

};





int main() {
    //Human ah = {"hong", 30, "student"};
    Human h("hong", 30, "student");
    h.show_data();

    return 0;
}