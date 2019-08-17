#include <iostream>

int main() {
    int t;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        int sum = 0;
        int n;
        std::cin >> n;
        for (int j = 0; j < n; j++) {
            int number;
            std::cin >> number;
            sum += number;
        }
        std::cout << sum << std::endl;
    }
}
