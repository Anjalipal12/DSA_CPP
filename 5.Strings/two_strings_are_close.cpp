#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;

bool closestring(string word1, string word2){
    if(word1.size() != word2.size()){
        return false;
    }
    
    //declared of freq1 and freq2
    vector<int> freq1(26,0) , freq2(26,0);

    //count freq of each char
    for(char c : word1) freq1[c-'a']++;
    for(char c : word2) freq2[c-'a']++;

    //check unique letter
    for(int i = 0 ; i<26 ; i++){
        if((freq1[i] == 0 && freq2[i] != 0) || (freq1[i] != 0 && freq2[i] == 0))
        return false;
    }

    //compare freq pattern
    sort(freq1.begin() , freq1.end());
    sort(freq2.begin(),freq2.end());
    return freq1 == freq2;

}
int main(){
    string word1 = "cabbba";
    string word2 = "abbccc";
    if(closestring(word1,word2)){
        cout<<"True"<<endl;
    }
    else{
        cout<<"false";
    }
}