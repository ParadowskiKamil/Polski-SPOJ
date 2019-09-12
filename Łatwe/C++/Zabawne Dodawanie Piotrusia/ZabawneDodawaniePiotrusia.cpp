#include <bits/stdc++.h>

bool isPalindrome(std::string number);

int main() {
    int t;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        std::string n;
        std::cin >> n;
        int counter = 0;
        while (!isPalindrome(n)) {
            int newNumber = std::stoi(n);
            std::reverse(n.begin(), n.end());
            int tempNumber = std::stoi(n);
            newNumber += tempNumber;
            n = std::to_string(newNumber);
            counter++;
        }
        std::cout << n << " " << counter << std::endl;
    }
}

bool isPalindrome(std::string number) {
    for (int i = 0; i < number.length() / 2; i++) {
        if (number[i] != number[number.length() - i - 1])
            return false;
    }
    return true;
}
