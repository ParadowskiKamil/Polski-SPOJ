#include <iostream>

int main() {
    long long sumOfAllSums = 0LL;
    int number;
    while (std::cin >> number) {
        long long sum = 0LL;
        sum += number;
        while (number != 0 && std::cin >> number)
            sum += number;
        sumOfAllSums += sum;
        std::cout << sum << std::endl;
    }
    std::cout << sumOfAllSums;
}
