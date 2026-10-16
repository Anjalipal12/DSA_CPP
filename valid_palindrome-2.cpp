#include<iostream>
#include<cstring>
using namespace std;

class Solution {
    public:
    bool isPalindrome(string s){
        //step 1 cleaned string
        string cleaned = "";
        for (char c: s){
            if(isalnum(c)){
                cleaned += tolower(c);
            }
        }
        int st = 0;
        int end = cleaned.size() - 1;
        while(st<=end){
            if(cleaned[st] != cleaned[end]){
                return false;
            }
            st++;
            end--;
        }
        return true;
    }
    

};
int main(){
    Solution sol;

    //test case
    string s1 = "A man , a plan , a canal : Panama";
    string s2 = "Hello World";
    string s3 = "No x in nixon";

    
    cout << s1 << " → " << (sol.isPalindrome(s1) ? "Palindrome ✅" : "Not Palindrome ❌") << endl;
    cout << s2 << " → " << (sol.isPalindrome(s2) ? "Palindrome ✅" : "Not Palindrome ❌") << endl;
    cout << s3 << " → " << (sol.isPalindrome(s3) ? "Palindrome ✅" : "Not Palindrome ❌") << endl;

    return 0;

}