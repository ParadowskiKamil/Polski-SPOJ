#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        char string[2001];
        scanf("%s", &string);
        char firstHalfOfString[strlen(string) / 2 + 1];
        strncpy(firstHalfOfString, string, strlen(string) / 2);
        firstHalfOfString[strlen(string) / 2] = '\0';
        printf("%s\n", firstHalfOfString);
    }
}