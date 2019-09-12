#include <iostream>

int main() {
    int target;
    int length;
    while (std::cin >> target >> length) {
        int numbers[length];
        int counter = 0;
        for (int number : numbers) {
            std::cin >> number;
            if (number == target)
                counter++;
        }
        std::cout << counter << std::endl;
    }
}
