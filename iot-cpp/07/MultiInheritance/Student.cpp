//
// Created by kimht4040 on 26. 3. 11..
//

#include "Student.h"

Student::Student(string name, double gpa):Person(name), gpa(gpa) {
    assert(gpa >=0.0 && gpa <= 4.0);
}


Student::~Student() {

}
void Student::print() {
    cout <<  "name: " << name << "\ngpa: " << gpa << endl;
}
