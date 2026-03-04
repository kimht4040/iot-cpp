#include <cstring>
#include <iostream>
using namespace std;
class Human {


    char name[20];
    int age;
    public:
    Human(const char* name, int age) {
        cout << "일반 생성자 호출" << endl;
        strcpy(this->name, name);
        this->age = age;
    }
    Human(const Human& other) {
        cout << "복사 생성자" << endl;
        strcpy(this->name, other.name);
        this->age = other.age;
    }
    Human(const Human&& other ) {
        cout << "이동생성자" << endl;
        strcpy(this->name, other.name);
        this->age = other.age;
    }
    void Show() {
        cout << name;
        cout << age << endl;
    }
};
int main() {
    Human human("Human", 20);
    human.Show();
    Human human2(human);
    human2.Show();
    Human human3(move(human));
    human3.Show();



    return 0;
}