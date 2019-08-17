#include <bits/stdc++.h>

int main() {
    int N;
    std::cin >> N;
    for (int i = 0; i < N; i++) {
        int a;
        int b;
        std::cin >> a >> b;
        std::cout << a * b / std::__gcd(a, b) << std::endl;
    }
}
