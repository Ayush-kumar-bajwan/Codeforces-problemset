#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
   long long n;
   cin>>n;
   long long sum = 0;
    int arr[n];
   for(int i=0; i<n; i++){
     cin>>arr[i];
     sum += arr[i];
   }
   if(sqrt(sum) == floor(sqrt(sum))){
    cout<<"YES"<<endl;
   }
   else{
    cout<<"NO"<<endl;
   }

    }
    return 0;
}