#include <stdio.h>
#include <string.h>

void printReducedString(const char * string);

int main()
{
    int C;
    scanf("%d", &C);
    for (int i = 0; i < C; i++)
    {
        char string[201];
        scanf("%s", string);
        printReducedString(string);
    }
}

void printReducedString(const char * string)
{
    int counterOfIdenticalLetters = 1;
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == string[i + 1])
        {
            counterOfIdenticalLetters++;
        }
        else if (counterOfIdenticalLetters > 2)
        {
            printf("%c%d", string[i], counterOfIdenticalLetters);
            counterOfIdenticalLetters = 1;
        }
        else if (counterOfIdenticalLetters == 2)
        {
            printf("%c%c", string[i], string[i]);
            counterOfIdenticalLetters = 1;
        }
        else
        {
            printf("%c", string[i]);
        }
    }
    printf("\n");
}