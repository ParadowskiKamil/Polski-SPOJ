#include <iostream>

int main() {
    int t;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        std::string pesel;
        std::cin >> pesel;
        int n[11];
        for (int j = 0; j < 11; j++)
            n[j] = pesel[j] - 48;
        if ((n[0] + n[1] * 3 + n[2] * 7 + n[3] * 9 + n[4] + n[5] * 3 + n[6] * 7 + n[7] * 9 + n[8] + n[9] * 3 + n[10]) % 10 == 0)
            std::cout << "D\n";
        else
            std::cout << "N\n";
    }
}
