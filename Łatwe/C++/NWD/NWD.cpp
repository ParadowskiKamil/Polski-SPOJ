#include <iostream>

int nwd(int a, int b);

int main() {
    int t;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        int a;
        int b;
        std::cin >> a >> b;
        std::cout << nwd(a, b) << std::endl;
    }
}

int nwd(int a, int b) {
    while (b != 0) {
        int c = a % b;
        a = b;
        b = c;
    }
    return a;
}
