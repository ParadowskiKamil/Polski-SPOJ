#include <iostream>

int main() {
    int n;
    for (int i = 0; i < 10; i++) {
        std::cin >> n;
        int sum = 0;
        for (int j = 1; j <= n; j++)
            sum += j;
        std::cout << sum << std::endl;
    }
}
