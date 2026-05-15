#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    // store children node
    unordered_map<char, Node*>children;

    //check word ending
    bool endofword;

    //constructor
    Node(){
        endofword = false;
    }
};

//trie class
class Trie{
    Node* root;
    
}
int main(){
    string str = "ababa";
    cout<<Countuniquesubstr(str)<<endl;
    return 0;
}