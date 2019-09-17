#include <iostream>

int main() {
    std::string str;
    while (getline(std::cin, str)) {
        for (int i = 0; i < str.length(); i++) {
            if (str[i] == ' ') {
                while (str[++i] == ' ')
                    std::cout << "";
                std::cout << (char) toupper(str[i]);
            } else
                std::cout << str[i];
        }
        std::cout << std::endl;
    }
}
