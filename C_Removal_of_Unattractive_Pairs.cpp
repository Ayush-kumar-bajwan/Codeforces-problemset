#include <iostream>
#include <algorithm>
#include<unordered_map>
using namespace std;

void solve(){
    long long n;
    cin>>n;
    unordered_map<char,int> mp;
    for( long long i =0; i<n; i++){
        char c;
        cin>>c;
        mp[c]++;
    }
    int maxele = 0;
    for( auto it: mp){
        maxele = max(maxele,it.second);
    }
    cout << max((int) n % 2, (int) (maxele - (n - maxele))) << endl;

    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}