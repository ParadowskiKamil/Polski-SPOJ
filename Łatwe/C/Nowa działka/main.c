#include <stdio.h>

int main()
{
    int D;
    scanf("%d", &D);
    for (int i = 0; i < D; i++)
    {
        int X;
        scanf("%d", &X);
        printf("%d\n", X * X);
    }
}