#include <iostream>

int main() {
    int t;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        int v1;
        int v2;
        std::cin >> v1 >> v2;
        std::cout << 2 * v1 * v2 / (v1 + v2) << std::endl;
    }
}
