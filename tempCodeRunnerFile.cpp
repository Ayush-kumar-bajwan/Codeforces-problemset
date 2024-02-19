#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin>>n;
    vector<ll> arr;
    ll sum =0;
    for(ll i=0; i<n; i++){
        ll el;
        cin>>el;
        arr.push_back(el);
    }
     if(arr[1]>arr[0] && n<=2) cout<<"NO"<<endl;
     else{
        for(ll i=0 ; i<n; i++){
            sum +=arr[i];
        }

        ll goal = sum/n;
        
        for(ll i=n-1 ; i>0; i++){
            if(arr[i] == goal){
                sum -= goal;
            }
            else if( arr[i] < goal){
                ll diff = abs(arr[i] - goal);
                if(arr[i-1] == goal){
                    arr[i]+= arr[i-1];
                    arr[i-1] = 0;
                    sum -= goal;
                }
                if(arr[i-1] > goal ){
                    arr[i] += diff;
                    arr[i-1] -= diff;
                    sum -= goal;
                }
            }
        }
            if(sum == sum/n) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        
     }
     
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}