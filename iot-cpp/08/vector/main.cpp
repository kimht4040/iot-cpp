#include <iostream>
#include <vector>
#include <chrono>
#include <random>

using namespace std;
int main() {
    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.pop_back();
    v.push_back(3);
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    v.erase(v.begin()+1);


    for (int x:v) {
        cout << x << " ";
    }
    cout << endl;
    unsigned seed = chrono::system_clock::now().time_since_epoch().count();
    default_random_engine generator(seed);
    shuffle(v.begin(), v.end(), generator);
    for (int x:v) {
        cout << x << " ";
    }
    cout << endl;
    sort(v.begin(), v.end());
    for (int x:v) {
        cout << x << " ";
    }
    cout << endl;
    reverse(v.begin(), v.end());


    vector<int> v2;
    for (int i = 0; i < 10; i++) {
        v2.push_back(rand()%100+1);
    }




    vector<vector<int>> v3;
    for (int i = 0; i < 10; i++) {
        v3.push_back(vector<int>());
        for (int j = 0; j < 10; j++) {
            v3[i].push_back(rand()%100+1);
        }
    }

    for (vector<int> x:v3) {
        for (int y:x){
            cout << y << " ";
        }
        cout << endl;
    }
    return 0;
}