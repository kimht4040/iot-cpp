#include <format>
#include <iostream>


using namespace std;

int main() {

    int num;
    int num2;
    cout << "Enter a number: ";
    cin >> num>> num2;

    cout << format("num2 + num = {}", num2+num) << endl;


    return 0;
}