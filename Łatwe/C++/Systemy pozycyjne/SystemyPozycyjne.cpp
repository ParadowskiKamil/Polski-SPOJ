#include <iostream>

std::string toUndecimal(int n);

int main() {
    int t;
    std::cin >> t;
    int n;
    for (int i = 0; i < t; i++) {
        std::cin >> n;
        std::cout << std::hex << std::uppercase << n << " " << toUndecimal(n) << std::endl;
    }
}

std::string toUndecimal(int n) {
    int firstSixPowersOfEleven[] = {161051, 14641, 1331, 121, 11, 1};
    int i = 0;
    while (firstSixPowersOfEleven[i] > n)
        i++;
    std::string answer;
    while (i < 6) {
        int digit = n / firstSixPowersOfEleven[i];
        n %= firstSixPowersOfEleven[i];
        i++;
        if (digit == 10)
            answer += 'A';
        else
            answer += std::to_string(digit);
    }
    return answer;
}
