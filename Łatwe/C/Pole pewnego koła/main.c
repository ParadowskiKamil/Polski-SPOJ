#include <stdio.h>

int main()
{
    double r, d;
    scanf("%lf%lf", &r, &d);
    printf("%0.2lf", (r * r - d * d / 4) * 3.141592654);
}