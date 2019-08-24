#include <iostream>

int main() {
    int t;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        std::cin >> n;
        int numbers[n];
        std::cin >> numbers[0];
        for (int j = 1; j < n; j++) {
            std::cin >> numbers[j];
            std::cout << numbers[j] << " ";
        }
        std::cout << numbers[0] << std::endl;
    }
}
