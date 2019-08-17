#include <iostream>

bool isPrime(int number);

int main() {
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int number;
        std::cin >> number;
        if (isPrime(number) && number != 1)
            std::cout << "TAK\n";
        else
            std::cout << "NIE\n";
    }
}

bool isPrime(int number) {
    for (int i = 2; i < number; i++) {
        if (number % i == 0)
            return false;
    }
    return true;
}
