#include<bits/stdc++.h>
using namespace std ; 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
  int t;
 cin >> t;
 while (t--)
 {
 
 int x, n;
 cin >> x >> n;
 int q = x / n;
 set<int> st;
 for (int i = 1; i <= sqrt(x); i++)
 {
 if (x % i == 0)
 {
 st.insert(i);
 st.insert(x / i);
 }
 }
 auto it = st.lower_bound(q);
 if (*it>q)
 {
 it--;
 }
 cout<<*it<<endl;
 
 }
 
 
 
  
  return 0;
}