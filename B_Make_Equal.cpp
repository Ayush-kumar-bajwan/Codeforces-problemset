#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> arr(n+1);
        ll totSum = 0;
        ll sum = 0;
        for(int i=1; i<=n; i++){
            cin>>arr[i];
            totSum += arr[i];
        }
        ll avg = totSum/n;
        bool p = true;
        for(int i=1; i<=n; i++){
            sum += arr[i];
            if(sum < i*avg){
                p = false;
            }
        }
        cout<<(p?"Yes\n" : "No\n"); 
    }
    return 0;
}