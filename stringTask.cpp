#include <iostream>
#include <string>
using namespace std;

int main(){
    string s ="";
    string str="";
    cin>>s;
     for (int i = 0; i < s.length(); i++) {
        if (!(tolower(s[i]) == 'a' || tolower(s[i]) == 'e' || tolower(s[i]) == 'i' ||
              tolower(s[i]) == 'o' || tolower(s[i]) == 'u' || tolower(s[i]) == 'y')) {
            str.push_back(tolower(s[i]));
        }
    }
    string ans = "";
    for(int i=0; i<str.length(); i++){
        ans.push_back('.');
        ans.push_back(str[i]);
    }
    
     cout<<ans<<endl;
    return 0;
}