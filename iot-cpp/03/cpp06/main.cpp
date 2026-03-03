#include <cstring>
#include <iostream>

using namespace std;
class MyClass {
private:
    int id;
    char name[20];
    int age;

public:
    void set_data(int id, char *name, int age) {
        strcpy(this->name, name);
        this->age = age;
        this->id = id;

    }
    void show_data() {
        cout << this->name << " " << this->age << " " << this->id << endl;
    }

};



int main() {

    MyClass aa;
    aa.set_data(1, "aa", 27);
    aa.show_data();


    return 0;
}