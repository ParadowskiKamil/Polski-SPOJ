#include <stdio.h>

int calculateTwoIntegers(char sign, int firstNumber, int secondNumber);

int main()
{
    char sign;
    int numbers[2];
    while (scanf(" %c%d%d", &sign, &numbers[0], &numbers[1]) != EOF)
    {
        printf("%d\n", calculateTwoIntegers(sign, numbers[0], numbers[1]));
    }
}

int calculateTwoIntegers(char sign, int firstNumber, int secondNumber)
{
    switch (sign)
    {
        case '+':
            return firstNumber + secondNumber;
        case '-':
            return firstNumber - secondNumber;
        case '*':
            return firstNumber * secondNumber;
        case '/':
            return firstNumber / secondNumber;
        case '%':
            return firstNumber % secondNumber;
    }
}