#include <iostream>

int main() {
    int m;
    int n;
    std::cin >> m >> n;
    int matrix[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            std::cin >> matrix[i][j];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            std::cout << matrix[j][i] << " ";
        std::cout << std::endl;
    }
}
