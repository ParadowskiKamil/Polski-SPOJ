#include <bits/stdc++.h>

char* string_merge(char* firstString, char* secondString);

int main() {
    int t;
    std::cin >> t;
    char* firstString = new char[100];
    char* secondString = new char[100];
    for (int i = 0; i < t; i++) {
        std::cin >> firstString >> secondString;
        char* answer = string_merge(firstString, secondString);
        std::cout << answer << std::endl;
        delete [] answer;
    }
}

char* string_merge(char* firstString, char* secondString) {
    char* mergedString;
    std::string temp;
    if (strlen(firstString) > strlen(secondString)) {
        mergedString = new char[strlen(secondString) * 2 + 1];
        for (int i = 0; i < strlen(secondString); i++) {
            temp += firstString[i];
            temp += secondString[i];
        }
    } else {
        mergedString = new char[strlen(firstString) * 2 + 1];
        for (int i = 0; i < strlen(firstString); i++) {
            temp += firstString[i];
            temp += secondString[i];
        }
    }
    strcpy(mergedString, temp.c_str());
    return mergedString;
}
