#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    unordered_map<char,Node*>children;
    bool endofword;
    Node(){
        endofword = false;
    }
};

class Trie {
    Node* root;
public:
    Trie(){
        root = new Node();
    }
};

int main(){
    vector<string> words = {"the", "a", "there", "their","any","thee"};
    Trie trie;
    return 0;
}