#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(b%a == 0) cout<< b*(b/a)<<endl;
        else cout<< b* (a/ __gcd(a,b))<<endl;
       
    }
    return 0;
}