#include <iostream>

int main() {
    int x[10][10]{};

    *(x[0] + 10) = 123; // Выход за границу первой строки

    std::cout << "x[1][0] = " << x[1][0] << '\n';

    return 0;
}
