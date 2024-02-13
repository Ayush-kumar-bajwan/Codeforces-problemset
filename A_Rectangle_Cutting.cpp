#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a ,b;
        cin>>a>>b;
        bool canForm = (a % 2 != 0 && b % 2 != 0)
         || (a % 2 != 0 && b / 2 == a)
         || (b % 2 != 0 && a / 2 == b)
        || (a == 1 && b == 1);
    
    cout << (canForm ? "No" : "Yes") << endl;

    }
    return 0;
}