#include<iostream>
using namespace std;
void solve(){
    long long n;
    cin>>n;
    string a,b,c;
    cin>>a>>b>>c;
    long long cnt = 0;
    for (long i = 0; i < n; i++)
    {
        if(c[i]== a[i] || c[i] ==b[i]){
            cnt++;
        }
    }
    if(cnt == n){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}