#include <iostream>

int main() {
    int stack[10];
    int index = 0;
    char sign;
    while (std::cin >> sign) {
        if (sign == '+') {
            int number;
            std::cin >> number;
            if (index < 10) {
                stack[index++] = number;
                std::cout << ":)\n";
            } else
                std::cout << ":(\n";
        } else {
            if (index > 0)
                std::cout << stack[--index] << std::endl;
            else
                std::cout << ":(\n";
        }
    }
}
