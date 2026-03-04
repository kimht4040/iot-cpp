#include <iostream>
using namespace std;

class Array {
    int size;
    int *arr = new int[size];
    public:
    Array(int size): size(size) {
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }
    void print() {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
    }
    ~Array() {
        delete[] arr;
    }

};



int main() {

    int size;
    cin >> size;
    Array arr(size);
    arr.print();


    return 0;
}