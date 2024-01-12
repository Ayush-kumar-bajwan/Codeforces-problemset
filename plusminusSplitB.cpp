#include<iostream>
#include <string>

int main(){
    int t;
    std::cin>>t;
    while(t--){
        int n;
        std::cin>>n;
        std::string str;
        std::cin>>str;
        int plus = 0 , minus = 0;
        for (int i = 0; i <n ; i++)
        {
            if(str[i] == '+') plus++;
            else minus++;
        }
        std::cout<<abs(plus - minus)<<std::endl;
        
    }
    return 0;

}