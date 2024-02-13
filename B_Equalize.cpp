#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

#define int long long

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> v(n);
        set<int> uniqueElements;

        for (int i = 0; i < n; i++) {
            cin >> v[i];
            uniqueElements.insert(v[i]);
        }

        vector<int> uniqueVector(uniqueElements.begin(), uniqueElements.end());
        int k = n;
        n = uniqueVector.size();
        int ans = 1;

        for (int i = 0; i < n; i++) {
            int endValue = uniqueVector[i] + k - 1;
            int count = upper_bound(uniqueVector.begin(), uniqueVector.end(), endValue) - uniqueVector.begin() - i;
            ans = max(ans, count);
        }

        cout << ans << endl;
    }

    return 0;
}
