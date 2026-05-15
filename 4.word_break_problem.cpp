#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    //store children node
    unordered_map<char, Node*>children;

    //check word ending
    bool endofword;

    //constructor
    Node(){
        endofword = false;
    }
};

// trie class
class Trie{
    Node* root;
public:
    //constructor
    Trie(){
        root = new Node();
    }
    
    // insert word into Trie
    void insert(string key){
        //start from root node
        Node* temp = root;
        //traverse every character
        for(int i = 0 ; i<key.size() ; i++){

            //if character is not present
            //create a new node
            if(temp -> children.count(key[i]) == 0){
                temp->children[key[i]] = new Node();
            }
            //move to the next node
            temp = temp->children[key[i]];
        }
        //mark endofword
        temp -> endofword = true;
    }

    //search word in trie
    bool search(string key){
        // start from root node
        Node* temp = root;
        //traverse every character
        for(int i = 0 ; i<key.size() ; i++){
            //character exist
            if(temp->children.count(key[i])){
                temp = temp->children[key[i]];
            }else{
                //character is not found
                return false;

            }
        }
        //return if word is exist
        return temp->endofword;
    }
};

//recurssive helper
bool helper(Trie &trie, string key){
    //base case
    //if string become empty
    //then word breakis possible
    if(key.size() == 0){
        return true;
    }

    // try every possinle partition
    for(int i = 0 ; i<key.size() ; i++){
        // first part
        string first = key.substr(0,i+1);
        //second part
        string second = key.substr(i+1);

        //if first part exist in Trie
        //and remaining part is also valid
        if(trie.search(first) && helper(trie, second)){
            return true;
        }
    }
    //no valid partition is found
    return false;
}

//main word function
bool wordbreak(vector<string> dict, string key){
    // create the trie
    Trie trie;
    //insert dictionary
    for(int i = 0 ; i<dict.size() ; i++){
        trie.insert(dict[i]);
    }

    //check word break is possible or not
    return helper(trie, key);

}
int main(){
    vector<string> dict = {"i","like","sam","samsung","mobile","ice"};
    //check word break
    cout<< wordbreak(dict, "ilikesamsung")<<endl;
    return 0;
}