#include <iostream>

int main() {
    int t;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        int a;
        int b;
        std::cin >> a >> b;
        while (a != b) {
            if (a > b)
                a -= b;
            else
                b -= a;
        }
        std::cout << a + b << std::endl;
    }
}
