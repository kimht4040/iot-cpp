//
// Created by kimht4040 on 26. 3. 11..
//

#include "propessor.h"


propessor::propessor(string name, double salary) :Person(name), salary(salary){
    assert(salary >= 0.0);
}


propessor::~propessor() {

}

void propessor::print() {
    cout <<  "name: " << name << "\nsalary: " << salary << endl;
}
