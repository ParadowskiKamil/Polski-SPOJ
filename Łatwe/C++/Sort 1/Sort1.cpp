#include <bits/stdc++.h>

int main() {
    int t;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        std::cin >> n;
        std::string names[n];
        int x[n];
        int y[n];
        double distances[n];
        for (int j = 0; j < n; j++) {
            std::cin >> names[j] >> x[j] >> y[j];
            distances[j] = sqrt(x[j] * x[j] + y[j] * y[j]);
        }
        double originalDistances[n];
        std::copy(distances, distances + n, originalDistances);
        std::sort(distances, distances + n);
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                if (originalDistances[k] == distances[j])
                    std::cout << names[k] << " " << x[k] << " " << y[k] << std::endl;
            }
        }
    }
}
