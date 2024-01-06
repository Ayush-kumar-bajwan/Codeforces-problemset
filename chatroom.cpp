#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;

    std::string target = "hello";
    int j = 0;

    for ( int i = 0; i < s.length(); ++i) {
        if (s[i] == target[j]) {
            j++;
        }

        if (j == target.length()) {
            std::cout << "YES" << std::endl;
            return 0;
        }
    }

    std::cout << "NO" << std::endl;
    return 0;
}
