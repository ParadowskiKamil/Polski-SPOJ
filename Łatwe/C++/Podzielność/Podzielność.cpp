#include <iostream>

int main() {
    int t;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        int x;
        int y;
        std::cin >> n >> x >> y;
        for (int j = x; j < n; j +=x) {
            if (j % y != 0)
                std::cout << j << " ";
        }
        std::cout << std::endl;
    }
}
