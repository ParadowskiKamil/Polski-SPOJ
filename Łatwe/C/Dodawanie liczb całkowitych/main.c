#include <stdio.h>

int main()
{
    int numbers[3];
    scanf("%d%d%d", &numbers[0], &numbers[1], &numbers[2]);
    printf("%d", numbers[0] + numbers[1] + numbers[2]);
}