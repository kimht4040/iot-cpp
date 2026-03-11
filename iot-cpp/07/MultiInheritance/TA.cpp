//
// Created by kimht4040 on 26. 3. 11..
//

#include "TA.h"

TA::TA(string name, double gpa, double salary)
    : Person(name), Student(name, gpa), propessor(name, salary) {
}

TA::~TA() {
}

void TA::print() {
    cout << "name: " << name << endl;
    cout << "gpa: " << gpa << endl;
    cout << "salary: " << salary << endl;
}
