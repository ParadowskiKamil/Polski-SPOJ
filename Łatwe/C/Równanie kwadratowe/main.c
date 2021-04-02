#include <stdio.h>

int main()
{
    double A, B, C;
    while (scanf("%lf%lf%lf", &A, &B, &C) != EOF)
    {
        if (B * B - 4 * A * C > 0)
        {
            printf("2\n");
        }
        else if (B * B - 4 * A * C == 0)
        {
            printf("1\n");
        }
        else
        {
            printf("0\n");
        }
    }
}