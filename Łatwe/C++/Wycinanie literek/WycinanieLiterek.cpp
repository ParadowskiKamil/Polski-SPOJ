#include <iostream>

int main() {
    char c;
    std::string word;
    while (std::cin >> c >> word) {
        for (int i = 0; i < word.length(); i++) {
            if (word[i] != c)
                std::cout << word[i];
        }
        std::cout << std::endl;
    }
}
