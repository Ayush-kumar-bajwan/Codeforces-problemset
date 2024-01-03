#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cin >> n;

    while (n--) {
        string s = "";
        cin >> s;
        int len = s.length();

        if (len > 10) {
            int num = len - 2;
            cout << s[0] << num << s[len - 1] << endl;
        } else {
            cout << s << endl;
        }
    }

    return 0; 
}