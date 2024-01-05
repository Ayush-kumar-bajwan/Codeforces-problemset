#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    int totalSum = 0;

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        totalSum += arr[i];
    }

    sort(arr, arr + n, greater<int>());  // Sort in descending order

    int mySum = 0;
    int cnt = 0;

    for (int i = 0; i < n; ++i) {
        mySum += arr[i];
        totalSum -= arr[i];
        cnt++;

        if (mySum > totalSum) {
            break;  // Stop once the current person's sum becomes greater than the remaining sum
        }
    }

    cout << cnt << endl;

    return 0;
}
