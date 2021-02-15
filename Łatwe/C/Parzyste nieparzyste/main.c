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
            if (j % 2 == 1)
            {
                printf("%d ", numbers[j]);
            }
        }
        for (int j = 0; j < n; j += 2)
        {
            printf("%d ", numbers[j]);
        }
        printf("\n");
    }
}