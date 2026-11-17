#include <iostream>

int main() {
    int x[10][10]{};

    *(x[10] + 0) = 123; // Выход за границу первой строки

    std::cout << "x[10][0] = " << x[10][0] << '\n';

    return 0;
}
