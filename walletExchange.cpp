#include <iostream>

std::string find_winner(long long a, long long b) {
   if(a%2 == 0 && b%2 == 0) return "Bob";
   if(a%2 !=0 && b%2 != 0)  return "Bob";
   if((a+b)%2) return "Alice";
   if((a+b)%2 == 0) return "Bob";
    return "";
}

int main() {
    int t;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        long long a, b;
        std::cin >> a >> b;
        
        std::cout << find_winner(a, b) << std::endl;
    }

    return 0;
}
