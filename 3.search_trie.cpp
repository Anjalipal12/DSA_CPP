#include<bits/stdc++.h>
using namespace std;

//Node class represents one character node in Trie
class Node{
    public:
    // Store child nodes
    // key -> character
    // value -> address of next node
    unordered_map<char, Node*>children;

    // check whether word ends here or not
    bool endofword;

    // Constructor
    Node(){
        //Initially no word end here 
        endofword = false;
    }
};

// Trie class
class Trie{
    //root node of trie
    Node* root;
public:
    // constructor
    Trie(){
        //Create root node
        root = new Node();
    }

    // Function to insert word into trie
    void insert(string key){
        //start traversal from root 
        Node* temp = root;
        // Traversal every character of word
        for(int i= 0 ; i<key.size() ; i++){

            //if character does not exist 
            // then create new node
            if(temp->children.count(key[i]) == 0){
                temp->children[key[i]] = new Node();
            }
            // Move to the next node
            temp = temp ->children[key[i]];
        }
        // Mark last character as end of word
        temp -> endofword = true;
    }

    //Function to search word in Trie
    bool search(string key){
        //Start traversal from root
        Node* temp = root;

        // Traverse every character
        for(int i = 0 ; i<key.size(); i++){
            //if character exists
            if(temp->children.count(key[i])){
                //move to next node
                temp = temp->children[key[i]];
            }
            //character not found
            else{
                return false;
            }
        }
        return temp -> endofword;
    }
};
int main(){
    // words to insert into trie
    vector<string> words = {
        "the","a","there","their","any","thee"
    };
    // Create Trie Object
    Trie trie;

    // Insert all words into trie
    for(int i = 0 ; i<words.size(); i++){
        trie.insert(words[i]);
    }
    //search word in trie
    cout << trie.search("their")<<endl;
    return 0;
}
