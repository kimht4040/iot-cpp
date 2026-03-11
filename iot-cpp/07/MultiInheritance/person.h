//
// Created by kimht4040 on 26. 3. 11..
//

#ifndef CPP2_PERSON_H
#define CPP2_PERSON_H
#include <iostream>
#include <cassert>

using namespace std;


class Person {
    protected:
    string name;
    public:
    Person(string name);
    ~Person();
    void print();

};



#endif //CPP2_PERSON_H