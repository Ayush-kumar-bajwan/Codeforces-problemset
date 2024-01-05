#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void process_input(const string& s) {
    // Extract digits from the input string
    vector<int> digits;
    for (char ch : s) {
        if (isdigit(ch)) {
            digits.push_back(ch - '0');
        }
    }

    // Sort the digits in increasing order
    sort(digits.begin(), digits.end());

    // Construct the output string
    for (size_t i = 0; i < digits.size(); ++i) {
        cout << digits[i];
        if (i < digits.size() - 1) {
            cout << "+";
        }
    }

    cout << endl;
}

int main() {
    // Example usage
    string s;
    cin>>s;
    process_input(s);

    return 0;
}
