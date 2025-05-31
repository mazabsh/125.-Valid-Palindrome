#include<iostream> 
#include<vector> 
#include<string> 

using namespace std; 

class Solution{
public: 
      bool isPalindrome(string s){
        vector<char> palin; 
        for(char c: s){
          if(isalnum(c)){
            palin.push_back(tolower(c)); 
          }else continue; 
        }
        int n = palin.size(); 
        int l=0; 
        int r = n-1; 
        while(l<r){
          if(palin[r]==palin[l]){
            ++l; 
            --r;
          }else return false; 
        }
        return true; 
      }
};
int main(){
    string s ="A man, a plan, a canal: Panama"; 
    Solution sol; 
    cout << boolalpha<< sol.isPalindrome(s) <<endl; 
    return 0; 
}
