#include <iostream>

int main() {
    int D;
    std::cin >> D;
    for (int i = 0; i < D; i++) {
        int L;
        int C;
        std::cin >> L >> C;
        if (L > 1 && C % --L == 0)
            std::cout << "NIE\n";
        else
            std::cout << "TAK\n";
    }
}
