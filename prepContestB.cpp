#include<iostream>
using namespace std;
#define finput ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int main(){
    finput;
    int  t;
     cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;
        for (int i=1;i<=k;i++)
        {
            cout<<i<<" ";
        }
        for (int i=n;i>k;i--)
        {
            cout<<i<<" ";
        }
        cout<<"\n";
    }
    return 0;
}