#include <iostream>

int main() {
    double a;
    double b;
    double c;
    while (std::cin >> a >> b >> c) {
        if (abs(b - c) < a && a < b + c)
            std::cout << 1 << std::endl;
        else
            std::cout << 0 << std::endl;
    }
}
