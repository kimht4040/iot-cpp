//
// Created by kimht4040 on 26. 3. 11..
//

#ifndef CPP2_TA_H
#define CPP2_TA_H

#include "Student.h"
#include "propessor.h"

class TA : public Student, public propessor {
public:
    TA(string name, double gpa, double salary);
    ~TA();
    void print();
};


#endif //CPP2_TA_H
