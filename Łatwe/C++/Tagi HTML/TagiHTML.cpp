#include <iostream>

int main() {
    std::string str;
    while (getline(std::cin, str)) {
        for (int i = 0; i < str.length(); i++) {
            if (str[i] == '<') {
                while (str[++i] != '>')
                    str[i] = toupper(str[i]);
            }
        }
        std::cout << str << std::endl;
    }
}
