#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int numbers[n];
    for (int i = 0; i < n; i++)
        std::cin >> numbers[i];
    char sign;
    int x;
    std::cin >> sign >> x;
    for (int number : numbers) {
        if (sign == '<' && number < x)
            std::cout << number << std::endl;
        else if (sign == '>' && number > x)
            std::cout << number << std::endl;
    }
}
