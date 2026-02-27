#include <iostream>

using namespace std;


namespace BestComImpl {
    void SimpleFunc();
}
namespace ProgComImpl {
    void SimpleFunc();
}




int main() {


    BestComImpl::SimpleFunc();
    ProgComImpl::SimpleFunc();

    return 0;
}


void BestComImpl::SimpleFunc() {
    cout << "best" << endl;
}

void ProgComImpl::SimpleFunc() {
    cout << "prog" << endl;
}
