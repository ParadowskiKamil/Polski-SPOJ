#include <iostream>

int main() {
    int t;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        std::cin >> n;
        int lifeSpan = n - 1;
        int numberOfLegs;
        for (int j = 0; j < n; j++) {
            std::cin >> numberOfLegs;
            lifeSpan += numberOfLegs;
        }
        std::cout << lifeSpan << std::endl;
    }
}
