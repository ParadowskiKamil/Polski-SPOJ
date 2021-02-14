#include <stdio.h>

int nwd(int a, int b);

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        printf("%d\n", nwd(a, b));
    }
}

int nwd(int a, int b)
{
    while (b != 0)
    {
        int c = a % b;
        a = b;
        b = c;
    }
    return a;
}