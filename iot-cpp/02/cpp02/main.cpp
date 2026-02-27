#include <iostream>
#include <string>
#include <format>

using namespace std;

int main() {

    char name[100];
    char language[100];

    cout << "이름과 좋아하는 언어를 입력하세요.";



    cin >> name >> language;


    cout << format("이름은 {}\n좋아하는 언어는 {} 입니다", name, language);
    return 0;
}