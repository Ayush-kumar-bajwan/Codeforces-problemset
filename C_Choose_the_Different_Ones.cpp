#include <bits/stdc++.h>
using namespace std;

void solve(){
   int n,m,k;
   cin>>n>>m>>k;
   int a[n];
   int b[m];
   set<int>one,two;
   for(int i =0; i<n; i++){
        cin>>a[i];
   }
   for(int i =0; i<m; i++){
        cin>>b[i];
   }
   sort(a,a+n);
   sort(b,b+m);
   for( auto x : a){
    if(x <=k ){
      one.insert(x);
    }
   }
   for( auto x: b){
    if(x <= k){
     two.insert(x);
    }
   }
   set<int> combo;
   if(one.size()<k/2 || two.size() <k/2)  cout<<"No"<<endl;
   else{
    bool found = true;
      for(auto x: one){
        combo.insert(x);
      }
      
      for(auto x: two){
        combo.insert(x);
      }
      for(int i=1; i<=k; i++){
         if((combo.find(i) == combo.end())) found = false;
      }
      if(found) cout<<"Yes"<<endl;
      else cout<<"No"<<endl;
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