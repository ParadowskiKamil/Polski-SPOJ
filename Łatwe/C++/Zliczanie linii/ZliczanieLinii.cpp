#include <iostream>

int main() {
    int lineCounter = 0;
    std::string line;
    while (getline(std::cin, line))
        lineCounter++;
    std::cout << lineCounter;
}
