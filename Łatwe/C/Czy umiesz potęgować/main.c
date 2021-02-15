#include <stdio.h>

int generateLastDigitOfExponentiation(int base, int power);

int main()
{
    int D;
    scanf("%d", &D);
    for (int i = 0; i < D; i++)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        printf("%d\n", generateLastDigitOfExponentiation(a, b));
    }
}

int generateLastDigitOfExponentiation(int base, int power)
{
    int lastFourDigitsOfFirstTenPowers[10][4] =
    {
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
    return lastFourDigitsOfFirstTenPowers[base % 10][power % 4];
}