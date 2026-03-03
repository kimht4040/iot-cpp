#include <cstring>
#include <iostream>
using namespace std;


int main() {
    char name[20] = "홍길동";
    char name1[20];
    char cp_name[20];

    strcpy(name1, "김영희");



    cout << "name : " << name << endl;
    cout << "name1 : " << name1 << endl;
    cin >> cp_name;
    cout << "cp_name : " << cp_name << endl;
    return 0;
}