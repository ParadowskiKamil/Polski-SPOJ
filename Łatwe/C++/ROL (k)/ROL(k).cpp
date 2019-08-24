#include <iostream>

int main() {
    int n;
    int k;
    std::cin >> n >> k;
    int numbers[n];
    for (int i = 0; i < n; i++) {
        std::cin >> numbers[i];
        if (k <= i)
            std::cout << numbers[i] << " ";
    }
    for (int i = 0; i < k; i++)
        std::cout << numbers[i] << " ";
}
