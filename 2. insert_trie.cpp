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

class Trie{
    Node* root;
public:
    Trie(){
        root = new Node();
    }
    void insert(string Key){
        Node* temp = root;

        for(int i = 0 ; i<Key.size() ; i++){
            if(temp->children.count(Key[i]) == 0){
                temp->children[Key[i]] = new Node();
            }
            temp = temp -> children[Key[i]];
        }
        temp->endofword = true;
    }
};

int main(){
    vector<string> words = {"the", "a", "there" , "their" , "any" , "thee"};
    Trie trie;
    for(int i = 0 ; i<words.size() ; i++){
        trie.insert(words[i]);
    }
    return 0;
}