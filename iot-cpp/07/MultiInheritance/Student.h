//
// Created by kimht4040 on 26. 3. 11..
//

#ifndef CPP2_STUDENT_H
#define CPP2_STUDENT_H
#include "person.h"

class Student: virtual public Person{
    protected:
    double gpa;
    public:
    Student(string name, double gpa);
    ~Student();
    void print();

};


#endif //CPP2_STUDENT_H