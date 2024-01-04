#include<iostream>
#include <string>
using namespace std;

int main(){
    string a, b;
    cin>>a;
    cin>>b;
    for(int i =0; i<a.size(); i++){
         char charA = tolower(a[i]);
        char charB = tolower(b[i]);

        if (charA < charB) {
            cout << "-1";
            return 0;  // You should exit the program after printing the result
        } else if (charA > charB) {
            cout << "1";
            return 0;  // You should exit the program after printing the result
        }
        
    }
    cout<<"0";
    return 0;
}