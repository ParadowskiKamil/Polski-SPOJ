#include <iostream>

int main() {
    int t;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        std::cin >> n;
        int numbers[n];
        for (int j = 0; j < n; j++) {
            std::cin >> numbers[j];
            if (j % 2 == 1)
                std::cout << numbers[j] << " ";
        }
        for (int j = 0; j < n; j += 2)
            std::cout << numbers[j] << " ";
        std::cout << std::endl;
    }
}
