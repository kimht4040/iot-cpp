#include <iostream>
template <typename T>
T add(T a, T b) {
    return a + b;
}
int main() {
    std::cout << add<int>(3, 4) << std::endl; // 7 (int로 구체화)
    std::cout << add<double>(3.5, 4.5) << std::endl; // 8.0 (double로 구체화)
    return 0;
}