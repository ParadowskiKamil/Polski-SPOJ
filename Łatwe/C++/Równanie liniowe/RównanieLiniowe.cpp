#include <iostream>

int main() {
    double a;
    double b;
    double c;
    std::cin >> a >> b >> c;
    if (a == 0) {
        if (b == c)
            std::cout << "NWR";
        else
            std::cout << "BR";
    } else
        printf("%.2f", (c - b) / a);
}
