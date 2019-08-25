#include <iostream>

int calculatePath(int a, int b);
void showPath(int x, int y);

int main() {
    int D;
    std::cin >> D;
    for (int i = 0; i < D; i++) {
        int N;
        std::cin >> N;
        int x = 0;
        int y = 0;
        for (int j = 0; j < N; j++) {
            int a;
            int b;
            std::cin >> a >> b;
            if (a < 2)
                y += calculatePath(a, b);
            else
                x += calculatePath(a, b);
        }
        showPath(x, y);
    }
}

int calculatePath(int a, int b) {
    switch (a) {
        case 0:
            return b;
        case 1:
            return -b;
        case 2:
            return -b;
        default:
            return b;
    }
}

void showPath(int x, int y) {
    if (x == 0 && y == 0)
        std::cout << "studnia\n";
    else {
        if (y > 0)
            std::cout << "0 " << y << std::endl;
        if (y < 0)
            std::cout << "1 " << abs(y) << std::endl;
        if (x < 0)
            std::cout << "2 " << abs(x) << std::endl;
        if (x > 0)
            std::cout << "3 " << x << std::endl;
    }
}
