#include <iostream>
class Simple {
    int num;
    public:
    Simple(int num):num(num) {
        std::cout << "Simple constructor" << std::endl;
    }
    void SimpleFunc() {
        std::cout << "Simple function" << std::endl;
    }
    void SimpleFunc() const {
        std::cout << "const Simple function" << std::endl;
    }

};
void YourFunc(const Simple& obj) {
    obj.SimpleFunc();
}



int main() {

    Simple obj(5);
    const Simple obj2(2);

    obj.SimpleFunc();
    obj2.SimpleFunc();

    YourFunc(obj);
    YourFunc(obj2);


    return 0;
}