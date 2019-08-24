#include <iostream>

int main() {
    int t;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        int s;
        std::cin >> s;
        int n = 0;
        while (s != 1) {
            if (s % 2 == 0)
                s /= 2;
            else
                s = 3 * s + 1;
            n++;
        }
        std::cout << n << std::endl;
    }
}
