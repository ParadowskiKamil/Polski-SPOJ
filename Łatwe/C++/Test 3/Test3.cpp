#include <iostream>

int main() {
    int counter = 0;
    while (counter < 3) {
        int number;
        std::cin >> number;
        std::cout << number << std::endl;
        while (number != 42) {
            std::cin >> number;
            std::cout << number << std::endl;
            if (number == 42)
                counter++;
        }
    }
}
