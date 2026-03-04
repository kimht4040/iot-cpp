#include <cstring>
#include <iostream>

class Person {
    char m_name[20];
    int m_age;
    public:
    Person(const char* name, int age) {
        printf("constructor\n");
        strcpy(m_name, name);
        m_age = age;

    }
    Person(const Person& other) {
        printf("copy constructor\n");
        strcpy(m_name, other.m_name);
        m_age = other.m_age;
    }
    ~Person() {
        printf("destructor\n");
    }
    void show() {
        printf("%s %d\n",m_name, m_age);
    }
};

int main() {

    Person m("홍길동", 100);
    m.show();
    Person copym(m);
    copym.show();

    return 0;
}