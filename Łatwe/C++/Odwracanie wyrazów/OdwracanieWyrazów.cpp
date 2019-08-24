#include <bits/stdc++.h>

int main() {
    std::string word;
    while (std::cin >> word) {
        reverse(word.begin(), word.end());
        std::cout << word << std::endl;
    }
}
