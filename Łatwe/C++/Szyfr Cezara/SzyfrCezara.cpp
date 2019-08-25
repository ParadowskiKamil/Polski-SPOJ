#include <iostream>

int main() {
    std::string caesarCipher;
    while (getline(std::cin, caesarCipher)) {
        for (int i = 0; i < caesarCipher.length(); i++) {
            if (caesarCipher[i] != ' ') {
                if (caesarCipher[i] > 87)
                    std::cout << (char) (caesarCipher[i] - 23);
                else
                    std::cout << (char) (caesarCipher[i] + 3);
            } else
                std::cout << " ";
        }
        std::cout << std::endl;
    }
}
