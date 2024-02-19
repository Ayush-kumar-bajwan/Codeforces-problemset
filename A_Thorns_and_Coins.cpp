#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        int cnt = 0;
        cin>>s;
        for(int i=0; i<n; i++){
            if(s[i] == '*' && s[i+1] == '*'){
                break;
            }
            else if(s[i]== '@'){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}