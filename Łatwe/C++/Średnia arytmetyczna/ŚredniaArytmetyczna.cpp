#include <bits/stdc++.h>

int main() {
    int t;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        std::cin >> n;
        int numbers[n];
        double arithmeticMean = 0.0;
        for (int j = 0; j < n; j++) {
            std::cin >> numbers[j];
            arithmeticMean += numbers[j];
        }
        arithmeticMean /= n;
        double difference = fabs(arithmeticMean - numbers[0]);
        int answer = numbers[0];
        for (int number : numbers) {
            if (difference > fabs(arithmeticMean - number)) {
                difference = fabs(arithmeticMean - number);
                answer = number;
            }
        }
        std::cout << answer << std::endl;
    }
}
