#include <cstdint>
#include <iostream>

int main() {
    double x[10];

    for (int i = 0; i < 10; ++i) {
        std::cout << reinterpret_cast<std::uintptr_t>(&x[i]) << '\n';
    }

    return 0;
}
