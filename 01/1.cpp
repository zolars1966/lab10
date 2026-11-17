#include <iostream>

int main() {
    int a = 10, b = 20;
    int *p = &a, *q = &b;

    std::cout << "До присваивания: p=" << p << ", q=" << q << '\n';
    p = q;
    std::cout << "После p=q:      p=" << p << ", q=" << q << '\n';
    std::cout << "Адреса a и b:   " << &a << ", " << &b << '\n';
}
