#include <iostream>
#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
using namespace std;
void solve(){
    int n;
    cin>>n;
    ll arr[n];
    ll neg = 0;
    ll zero = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]<0){
            neg++;
        }
        if(arr[i] == 0){
            zero++;
        }
    }
    if(zero != 0){
        cout<<"0"<<endl;
    }
    else{
        if(neg%2 == 0){
            cout<<"1"<<endl;
            cout<<"1"<<" "<<"0"<<endl;
        }
        else{
            cout<<"0"<<endl;
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}