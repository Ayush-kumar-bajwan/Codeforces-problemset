#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;

        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        int mx = 0;
        for (int i = 1; i < n; ++i) {
            mx = max(mx, arr[i] - arr[i - 1]);
        }

        int ans = max(max(mx, 2 * (x - arr.back())), arr.front());
        cout << ans << endl;
    }

    return 0;
}
