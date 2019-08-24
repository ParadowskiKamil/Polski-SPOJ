#include <iostream>

int calculateTwoIntegers(char sign, int firstNumber, int secondNumber);

int main() {
    char sign;
    int firstNumber;
    int secondNumber;
    while (std::cin >> sign >> firstNumber >> secondNumber)
        std::cout << calculateTwoIntegers(sign, firstNumber, secondNumber) << std::endl;
}

int calculateTwoIntegers(char sign, int firstNumber, int secondNumber) {
    switch (sign) {
        case '+':
            return firstNumber + secondNumber;
        case '-':
            return firstNumber - secondNumber;
        case '*':
            return firstNumber * secondNumber;
        case '/':
            return firstNumber / secondNumber;
        default:
            return firstNumber % secondNumber;
    }
}
