#include <iostream>

int calculateTwoIntegers(int memory[], char sign, int index, int number);

int main() {
    int memory[10];
    char sign;
    int index;
    int number;
    while (std::cin >> sign >> index >> number) {
        if (sign == 'z')
            memory[index] = number;
        else
            std::cout << calculateTwoIntegers(memory, sign, index, number) << std::endl;
    }
}

int calculateTwoIntegers(int memory[], char sign, int index, int number) {
    switch (sign) {
        case '+':
            return memory[index] + memory[number];
        case '-':
            return memory[index] - memory[number];
        case '*':
            return memory[index] * memory[number];
        case '/':
            return memory[index] / memory[number];
        default:
            return memory[index] % memory[number];
    }
}
