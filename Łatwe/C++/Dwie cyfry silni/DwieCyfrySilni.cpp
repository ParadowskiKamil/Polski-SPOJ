#include <iostream>

int main() {
    std::string firstTwoDigitsOfFirstTenFactorials[] = {"0 1", "0 1", "0 2", "0 6", "2 4", "2 0", "2 0", "4 0", "2 0", "8 0"};
    int D;
    std::cin >> D;
    for (int i = 0; i < D; i++) {
        int n;
        std::cin >> n;
        if (n < 10)
            std::cout << firstTwoDigitsOfFirstTenFactorials[n] << std::endl;
        else
            std::cout << "0 0\n";
    }
}
