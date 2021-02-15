#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        int numbers[n];
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &numbers[j]);
        }
        for (int j = 1; j < n; j++)
        {
            printf("%d ", numbers[j]);
        }
        printf("%d\n", numbers[0]);
    }
}