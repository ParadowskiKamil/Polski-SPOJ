#include <iostream>

int main() {
    int n;
    std::cin >> n;
    long long maximumProfit = 0LL;
    long long sum = 0LL;
    int number;
    for (int i = 0; i < n; i++) {
        std::cin >> number;
        if (sum > 0)
            sum += number;
        else
            sum = number;
        if (sum > maximumProfit)
            maximumProfit = sum;
    }
    std::cout << maximumProfit;
}
