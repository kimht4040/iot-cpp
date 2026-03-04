#include <chrono>
#include <iostream>
using namespace std;

class Array {
    int size;
    int *arr;
public:
    Array(int size): size(size) {
        cout  << "Array constructor" << endl;
        arr = new int[size];
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }
    Array(const Array &other) {
        size = other.size;
        cout<< "copy constructor" << endl;
        arr = new int[size];
        for (int i = 0; i < size; i++) {
            arr[i] = other.arr[i];     // 3. Copy the data from the source
        }
    }
    void print() {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
    }
    ~Array() {
        cout << "destructor" << endl;
        delete[] arr;
    }

};



int main() {

    int size;
    cin >> size;
    Array arr(size);
    Array other(arr);
    arr.print();
    other.print();

    return 0;
}