#include <iostream>
using namespace std;
void fun(int y);
int main() {

    int x= 10;
    fun(x);
    cout <<"메인함수 : " << x << endl;

    return 0;
}

void fun(int y) {
    y++;
    cout<< "fun : "  << y << endl;
}