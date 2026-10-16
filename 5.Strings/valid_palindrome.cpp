#include<iostream>
#include<cstring>
using namespace std;

bool isPalindrome(char str[] ,int n){
    int st = 0 ; int end = n-1 ;
    while(st<end){
        if(str[st] != str[end]){
            cout<<"not valid Palindrome";
            return false;
        }
    }
    cout<<"Valid Palindrome\n";
    return true;
    
}
int main(){
    char word[] = "racecar";
    cout<<isPalindrome(word,strlen(word));
    return 0;
}