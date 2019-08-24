#include <iostream>

int main() {
    double a;
    double b;
    double c;
    while (std::cin >> a >> b >> c) {
        if (b * b - 4 * a * c > 0)
            std::cout << 2 << std::endl;
        else if (b * b - 4 * a * c == 0)
            std::cout << 1 << std::endl;
        else
            std::cout << 0 << std::endl;
    }
}
