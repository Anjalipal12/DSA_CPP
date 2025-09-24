#include<iostream>
#include<stack>
#include<string>
using namespace std;

class solution {
    public:
    bool isValid(string s){
        stack<char>st;

        //push the char open brackets
        for(int i = 0 ; i<s.size() ; i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                st.push(s[i]);
            }
            // Closing the brackets
            else{
                if(st.size()==0){
                    //koi bhi open bracket available nhi ha
                    return false;
                }

                if((st.top()=='(' && s[i]==')') || (st.top()=='{' && s[i]=='}') || (st.top()=='[' && s[i]==']')){
                st.pop();
                }
                else{
                    return false;
                }
            } 
        }
        return st.size() == 0;
    }
};
int main(){
    solution sol;
    string s;
    cout<<"enter string of brackets: ";
    cin>>s;

    if(sol.isValid(s)){
        cout<<" Valid Paratnesis"<<endl;
    }else{
        cout<<"Invalid Paranthesis"<<endl;
    }
    return 0 ;
}