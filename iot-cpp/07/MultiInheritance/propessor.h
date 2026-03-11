//
// Created by kimht4040 on 26. 3. 11..
//

#ifndef CPP2_PROPESSOR_H
#define CPP2_PROPESSOR_H

#include "person.h"

class propessor: virtual public Person{
protected:
    double salary;
public:
    propessor(string name, double salary);
    ~propessor();
    void print();

};


#endif //CPP2_PROPESSOR_H