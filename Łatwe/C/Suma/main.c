#include <stdio.h>

int main()
{
    int number, sum = 0;
    while (scanf("%d", &number) != EOF)
    {
        sum += number;
        printf("%d\n", sum);
    }
}