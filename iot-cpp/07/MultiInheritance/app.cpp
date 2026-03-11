#include <iostream>
#include "TA.h"
using namespace std;

int main() {
    TA ta("alice", 3.8, 15000);
    ta.print();


    Student* studentPtr = &ta;
    studentPtr->print();

    propessor* propPtr = &ta;
    propPtr->print();




    return 0;
}