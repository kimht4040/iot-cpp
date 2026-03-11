//
// Created by kimht4040 on 26. 3. 11..
//
#include "person.h"


Person::Person(string name):name(name){

}

Person::~Person() {

}
void Person::print() {
    cout << "person name: " << name << endl;
}
