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

/* smaller version
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int a, b; cin >> a >> b;
        if ((a + b) % 2 == 0) {
            cout << "Bob\n";
        } else {
            cout << "Alice\n";
        }
    }
}*/
