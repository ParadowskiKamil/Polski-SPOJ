#include <bits/stdc++.h>

int main() {
    std::vector<int> numbers;
    int number;
    while (std::cin >> number)
        numbers.push_back(number);
    for (int i = numbers.size() - 1; i >= 0; i--)
        std::cout << numbers.at(i) << " ";
}
