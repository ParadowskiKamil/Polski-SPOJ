#include <stdbool.h>
#include <stdio.h>

bool isPeselValid(const char * pesel);

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        char pesel[12];
        scanf("%s", pesel);
        (isPeselValid(pesel)) ? printf("D\n") : printf("N\n");
    }
}

bool isPeselValid(const char * pesel)
{
    int digitsOfPesel[11];
    for (int i = 0; i < 11; i++)
    {
        digitsOfPesel[i] = pesel[i] - 48;
    }
    return ((digitsOfPesel[0] + digitsOfPesel[1] * 3 + digitsOfPesel[2] * 7 + digitsOfPesel[3] * 9 + digitsOfPesel[4] +
             digitsOfPesel[5] * 3 + digitsOfPesel[6] * 7 + digitsOfPesel[7] * 9 + digitsOfPesel[8] + digitsOfPesel[9] * 3 +
             digitsOfPesel[10]) % 10 == 0) ? true : false;
}