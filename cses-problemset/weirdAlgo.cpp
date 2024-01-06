#include<iostream>
#include <vector>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    vector<long long> a;
    a.push_back(n);
    while(n!=1){
        if(n %2 == 0){
            n /= 2;
            a.push_back(n);
        }
        else{
            n = (n*3) + 1;
            a.push_back(n);
        }
    }
    for( int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    return 0;
}