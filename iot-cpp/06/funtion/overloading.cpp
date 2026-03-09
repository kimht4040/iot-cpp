
#include <iostream>


auto my_max(auto x, auto y) {
    return x > y ? x : y;
}
int main()
{
    auto x = 10.2;
    auto y = 23.1;
    std::cout << my_max(x, y);

    return 0;
}

