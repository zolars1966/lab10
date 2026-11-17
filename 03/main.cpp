#include <iostream>

int main() {
    int a = 6;
    int b = 3;

    int *p = &a;
    int &r = a;

    std::cout << *p << '\n';
    std::cout << a * b << '\n';
    std::cout << (a & b) << '\n';

    r = 10;
    std::cout << a << '\n';

    return 0;
}
