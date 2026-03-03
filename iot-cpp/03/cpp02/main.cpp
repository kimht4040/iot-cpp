#include <iostream>





int main() {

    int *ptr = new int;
    int &ref = *ptr;
    ref = 2;
    std::cout << ref << std::endl;
    delete ptr;


    return 0;
}