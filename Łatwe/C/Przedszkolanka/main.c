#include <stdio.h>

int gcd(int a, int b);

int main()
{
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        printf("%d\n", a * b / gcd(a, b));
    }
}

int gcd(int a, int b)
{
    while (b != 0)
    {
        int c = a % b;
        a = b;
        b = c;
    }
    return a;
}