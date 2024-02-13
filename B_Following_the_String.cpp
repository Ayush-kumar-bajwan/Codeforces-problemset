#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i = 0;i<n;i++){
            cin>>v[i];
        }
        map<int,vector<char>>mpp;
        string s="";
        int cnt = 0;
        for(auto c:v){
            if(mpp[c].size()==0){
                mpp[c].push_back('a');
                s+='a';
            }
            else{
                mpp[c].push_back(mpp[c][mpp[c].size()-1]+1);
                s+=mpp[c][mpp[c].size()-1];
            }
        }
        cout<<s<<endl;
    }

}