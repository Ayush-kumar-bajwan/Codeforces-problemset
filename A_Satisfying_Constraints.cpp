#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int ma = INT_MIN;
        int mi = INT_MAX;
        vector<int> v1;

        while (n--) {
            int a, x;
            cin >> a >> x;
            if (a == 1)
                ma = max(ma, x);
            else if (a == 2)
                mi = min(mi, x);
            else
                v1.push_back(x);
        }

        int counter = (mi - ma) + 1;

        for (int i = 0; i < v1.size(); i++) {
            if (ma <= v1[i] && mi >= v1[i]) {
                counter--;
            }
        }

        if (counter < 0)
            cout << 0 << '\n';
        else
            cout << counter << '\n';
    }

    return 0;
}
