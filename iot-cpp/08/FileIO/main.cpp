#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main() {
    ifstream fin("input.txt");
    string line;
    if (fin.is_open()) {
        while (getline(fin, line)) {
            cout << line << endl;
        }
    }
    ofstream fout("output.txt");
    return 0;
}