#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string";
    getline(cin,str);
    int count = 0;
    for(char c : str){
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
        count++;
    }
    cout<<"Number of Lowercase Vowels"<<count<<endl;
    return 0;
}