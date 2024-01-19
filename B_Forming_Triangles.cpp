#include<bits/stdc++.h>
using namespace std;
long long f3(long long num){
    return(num*(num-1)*(num-2))/6;
}
long long f2( long long n){
    return (n*(n-1))/2;
}
void compute(){
    long long n;
    cin>>n;
    vector<int> a(n+1,0);
    for(long long i=0; i<n; i++){
        long long x;
        cin>>x;
        a[x]++;
    }
    long long res = 0;
    long long p = 0;
    for(long long i=0; i<= n; i++){
        if(a[i]>=3){
            res += f3(a[i]);
        }
        if(a[i]>=2){
            res += f2(a[i])*p;
        }
        p += a[i];
    }
    cout<<res<<endl;
}
int main(){
    long long t;
    cin>>t;
    while(t--){
        compute();
    }
    return 0;
}