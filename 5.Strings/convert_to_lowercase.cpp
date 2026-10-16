#include<iostream>
#include<cstring>
using namespace std;

void tolower(char word[] , int n){
    for(int i = 0 ; i<n ; i++){
        //current character
        char ch = word[i];
        if(ch>='a' && ch<='z'){
            continue;
        }else{
            word[i] = ch - 'A' + 'a';
        }
    }
}
int main(){
    char word[] = "APPLE";
    tolower(word,strlen(word));
    cout<<word<<endl;
    return 0;
}