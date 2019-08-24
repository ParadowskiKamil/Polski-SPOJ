#include <iostream>

int main() {
    int t;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        std::string str;
        std::cin >> str;
        std::cout << str.substr(0, str.length() / 2) << std::endl;
    }
}
