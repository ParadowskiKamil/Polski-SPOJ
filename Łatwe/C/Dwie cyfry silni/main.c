#include <stdio.h>

const char * generateLastTwoDigitsOfFactorial(int number);

int main()
{
    int D;
    scanf("%d", &D);
    for (int i = 0; i < D; i++)
    {
        int n;
        scanf("%d", &n);
        printf("%s\n", generateLastTwoDigitsOfFactorial(n));
    }
}

const char * generateLastTwoDigitsOfFactorial(int number)
{
    switch (number)
    {
        case 0:
        case 1:
            return "0 1";
        case 2:
            return "0 2";
        case 3:
            return "0 6";
        case 4:
            return "2 4";
        case 5:
        case 6:
        case 8:
            return "2 0";
        case 7:
            return "4 0";
        case 9:
            return "8 0";
        default:
            return "0 0";
    }
}