#include <cstring>
#include <iostream>

using namespace std;
class MyClass {
private:
    int id;
    char name[20];
    int age;

public:
    MyClass(int id, char name[20], int age);
    void show_data();

};
void MyClass::show_data() {
    cout << this->name << " " << this->age << " " << this->id << endl;
}
MyClass::MyClass(int id, char name[20], int age):id(id), age(age)  {
    strcpy(this->name, name);
}

int main() {

    MyClass aa(1,"kimhaktae", 27);
    aa.show_data();


    return 0;
}