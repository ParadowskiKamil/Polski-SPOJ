#include <iostream>

int main() {
    std::string word;
    std::cin >> word;
    std::string alphabet = "abcdefghiklmnopqrstvxyz";
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 200, 300, 400, 500};
    int year = 0;
    for (int i = 0; i < word.length(); i++) {
        for (int j = 0; j < alphabet.length(); j++) {
            if (word[i] == alphabet[j])
                year += numbers[j];
        }
    }
    std::cout << year;
}
