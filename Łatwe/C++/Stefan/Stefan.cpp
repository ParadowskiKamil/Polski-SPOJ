#include <iostream>

int main() {
    int n;
    std::cin >> n;
    long long maximumProfit = 0LL;
    long long sum = 0LL;
    int income;
    for (int i = 0; i < n; i++) {
        std::cin >> income;
        if (sum > 0)
            sum += income;
        else
            sum = income;
        if (sum > maximumProfit)
            maximumProfit = sum;
    }
    std::cout << maximumProfit;
}
