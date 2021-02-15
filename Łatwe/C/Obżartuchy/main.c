#include <math.h>
#include <stdio.h>

int main()
{
    int testCases;
    scanf("%d", &testCases);
    for (int i = 0; i < testCases; i++)
    {
        int N, M;
        scanf("%d%d", &N, &M);
        double eatenCookies = 0.0;
        for (int j = 0; j < N; j++)
        {
            int timeInSeconds;
            scanf("%d", &timeInSeconds);
            eatenCookies += 86400 / timeInSeconds;
        }
        printf("%d\n", (int)ceil(eatenCookies / M));
    }
}