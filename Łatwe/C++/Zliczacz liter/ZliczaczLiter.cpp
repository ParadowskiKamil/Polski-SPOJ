#include <iostream>

int main() {
    int N;
    std::cin >> N;
    std::cin.get();
    int letterCounter[52] = {};
    std::string alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (int i = 0; i < N; i++) {
        std::string str;
        getline(std::cin, str);
        for (int j = 0; j < 52; j++) {
            for (int k = 0; k < str.length(); k++) {
                if (str[k] == alphabet[j])
                    letterCounter[j]++;
            }
        }
    }
    for (int i = 0; i < 52; i++) {
        if (letterCounter[i] > 0)
            std::cout << alphabet[i] << " " << letterCounter[i] << std::endl;
    }
}
