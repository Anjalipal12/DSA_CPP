#include<bits/stdc++.h>
using namespace std;
vector<string> keypad = {
    " ", " ", "abc" , "def" , "ghi" , "jkl" , "mno" , "pqrs" , "tuv" , "wxyz"
};

//Backtracking function to generate a combinations
void backtrack(string digits , int index , string current , vector<string> &result){
    //base case ---> if we have processed all digits
    if(index == digits.size()){
        result.push_back(current); // addd current combination to result
        return;  // return to  previous recurssion level
    }

    //current digit ka numeric value nikaal rahe ha
    int digit = digits[index] - '0';
    //current digit ke letter lelo
    string letter = keypad[digit];

    //har letter ka liya recursion call kare
    for(char c : letter){
        //letter ko add karo aur next index par recursion
        backtrack(digits, index + 1 , current + c , result );
    }   
}
//Helper function jo backtrack start karta ha
vector<string> letterCombination(string digit){
    vector<string> result;                     // ye vector sab combination store karega
    if(digit.empty()) return result;           //agar input empty ho ---> empty vector return kare
    backtrack(digit , 0 , "" , result)  ;       // start recursion from index 0 , empty current
    return result;
}

int main(){
    string digits = "23";
    vector<string> combinations = letterCombination(digits);
    // Print kar do sab combinations
    for(string s : combinations) {
        cout << s << " "; // Output: ad ae af bd be bf cd ce cf
    }
    cout << endl;

    return 0;
}
