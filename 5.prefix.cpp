#include<bits/stdc++.h>
using namespace std;

//Trie Node
class Node{
    public:
    // store children in node
    unordered_map<char,Node*> children;
    //check end of word
    bool endofword;
    //store freq of character
    int freq;
    Node(){
        endofword = false;
    }
};

//Trie class
class Trie{
    Node* root;
public:
    //constructor
    Trie(){
        root = new Node();
        root->freq = -1;
    }

    //Insert word into trie
    void insert(string key){

        //start from root
        Node* temp = root;

        //traverse every character
        for(int i = 0 ; i<key.size() ; i++){
            //if character does not exit
            if(temp->children.count(key[i]) == 0){

                //create a new node
                temp->children[key[i]] = new Node();

                //first time frequency = 1
                temp->children[key[i]]->freq = 1;
            }
            //character already exist
            else{
                //increase a frequency
                temp->children[key[i]]->freq++;
            }
            //move to next node
            temp = temp->children[key[i]];
        }
        //mark end of word
        temp->endofword = true;
    }

    //search word in trie
    bool search(string key){
        //start from root node
        Node* temp = root;

        //traverse every character
        for(int i = 0 ; i<key.size() ; i++){
            //character exist
            if(temp->children.count(key[i])){
                temp = temp->children[key[i]];
            }
            //character not found
            else{
                return false;
            }
        }
        return temp->endofword;
    }
    //get unique frequency
    string getprefix(string key){
        //start from root node
        Node* temp = root;
        string prefix = "";

        // traverse every character
        for(int i = 0 ; i<key.size() ; i++){
            //add character into prefix
            prefix += key[i];

            //move to next node
            temp = temp->children[key[i]];

            //if frequency becomes 1
            //then unique prefix found
            if(temp->freq == 1){
                break;
            }
        }
        return prefix;
    }
};
int main(){
    vector<string>dict = {"zebra","dog","duck","dove"};
    prefixproblem(dict);
    return 0;
}