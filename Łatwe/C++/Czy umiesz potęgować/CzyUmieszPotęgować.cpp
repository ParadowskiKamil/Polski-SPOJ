#include <iostream>

void printDigitOfUnityOfPower(int a, int b);

int main() {
    int D;
    std::cin >> D;
    for (int i = 0; i < D; i++) {
        int a;
        int b;
        std::cin >> a >> b;
        printDigitOfUnityOfPower(a, b);
    }
}

void printDigitOfUnityOfPower(int a, int b) {
    int firstFourDigitsOfFirstTenPowers[10][4] = {
        {0, 0, 0, 0},
        {1, 1, 1, 1},
        {6, 2, 4, 8},
        {1, 3, 9, 7},
        {6, 4, 6, 4},
        {5, 5, 5, 5},
        {6, 6, 6, 6},
        {1, 7, 9, 3},
        {6, 8, 4, 2},
        {1, 9, 1, 9}
    };
    std::cout << firstFourDigitsOfFirstTenPowers[a % 10][b % 4] << std::endl;
}
