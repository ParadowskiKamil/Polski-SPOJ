#include <bits/stdc++.h>

int main() {
    int testCases;
    std::cin >> testCases;
    for (int i = 0; i < testCases; i++) {
        int N;
        int M;
        std::cin >> N >> M;
        double eatenCookies = 0.0;
        for (int j = 0; j < N; j++) {
            int timeInSecondsPerGlutton;
            std::cin >> timeInSecondsPerGlutton;
            eatenCookies += 86400 / timeInSecondsPerGlutton;
        }
        std::cout << ceil(eatenCookies / M) << std::endl;
    }
}
