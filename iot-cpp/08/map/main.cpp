#include <iostream>
#include <map>
using namespace std;


int main() {
    map<string, int> m;
    m["apple"] = 100;
    m["banana"] =200;
    m["orange"] = 300;





    for (map<string, int>::iterator it = m.begin(); it != m.end(); ++it) {
        cout << it->first << ": " << it->second << endl;
    }
    for (auto& p :m) {
        cout << p.first << ": " << p.second << endl;
    }


    m.insert({"grape", 400});

    map<string,int> score;
    score["kim"] = 90;
    score["lee"] = 99;
    score["park"] = 89;


    for (auto& p :score) {
        cout << p.first << ": " << p.second << endl;
    }


    return 0;
}