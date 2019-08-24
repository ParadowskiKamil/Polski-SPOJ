#include <iostream>

int main() {
    int t;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        int c;
        int k;
        int w;
        std::cin >> c >> k >> w;
        if (c * w <= k)
            std::cout << "yes\n";
        else
            std::cout << "no\n";
    }
}
