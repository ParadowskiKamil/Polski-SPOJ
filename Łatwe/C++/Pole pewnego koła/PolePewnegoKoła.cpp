#include <bits/stdc++.h>

int main() {
    double r;
    double d;
    std::cin >> r >> d;
    double S = (r * r - d * d / 4) * M_PI;
    printf("%0.2f", S);
}
