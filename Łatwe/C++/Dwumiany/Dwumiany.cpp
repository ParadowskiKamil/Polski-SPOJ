#include <iostream>

int binomialCoefficient(int n, int k);

int main() {
    int T;
    std::cin >> T;
    int n;
    int k;
    for (int i = 0; i < T; i++) {
        std::cin >> n >> k;
        std::cout << binomialCoefficient(n, k) << std::endl;
    }
}

int binomialCoefficient(int n, int k) {
    if (k > n - k)
        k = n - k;
    long long answer = 1LL;
    for (int i = 0; i < k; i++) {
        answer *= n - i;
        answer /= i + 1;
    }
    return (int) answer;
}
