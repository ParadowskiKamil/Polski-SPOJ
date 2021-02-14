#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int v1, v2;
        scanf("%d%d", &v1, &v2);
        printf("%d\n", 2 * v1 * v2 / (v1 + v2));
    }
}