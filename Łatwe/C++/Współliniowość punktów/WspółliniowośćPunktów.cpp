#include <iostream>

int main() {
    int t;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        int x[3];
        int y[3];
        for (int j = 0; j < 3; j++)
            std::cin >> x[j] >> y[j];
        if (x[0] * y[1] + x[1] * y[2] + x[2] * y[0] - y[1] * x[2] - y[2] * x[0] - y[0] * x[1] == 0)
            std::cout << "TAK\n";
        else
            std::cout << "NIE\n";
    }
}
