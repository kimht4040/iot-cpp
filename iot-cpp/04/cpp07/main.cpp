#include <iostream>
using namespace std;
class Test {
    static int num;
public:

    void Print() {
        std::cout << "num: " << num << std::endl;
    }
};
int Test::num = 0;


int main() {



    Test t;
    cout << t.num << endl;


    return 0;
}