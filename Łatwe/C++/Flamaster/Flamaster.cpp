#include <iostream>

void printReducedString(std::string str);

int main() {
    int C;
    std::cin >> C;
    for (int i = 0; i < C; i++) {
        std::string str;
        std::cin >> str;
        printReducedString(str);
    }
}

void printReducedString(std::string str) {
    str += ' ';
    for (int j = 0; j < str.length() - 1; j++) {
        int counter = 1;
        while (str[j] == str[j + 1]) {
            counter++;
            j++;
        }
        std::cout << str[j];
        if (counter > 2)
            std::cout << counter;
        else if (counter == 2)
            std::cout << str[j];
    }
    std::cout << std::endl;
}
