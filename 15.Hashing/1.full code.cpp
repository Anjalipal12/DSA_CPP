#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Node{
    public:
    string key;
    int value;
    Node* next;
    
    Node(string key , int val){
        this->key = key;
        this->value = val;
        next = NULL;
    }

    ~Node() {
        if(next != NULL){
            delete next;
        }
    }
};

class HashTable{
    int total_size;
    int current_size; //rehashing
    Node** table;

    int HashFunction(string key){
        int idx = 0;

        for(int i = 0; i<key.size(); i++){
            idx = idx + (key[i] * key[i]) % total_size;
        }
        return idx;
    }

    void rehash() {
        Node** oldTable = table;
        int oldSize = total_size;

        total_size = 2*total_size;
        current_size = 0;
        table = new Node*[total_size];

        for(int i = 0 ; i<total_size; i++){
            table[i] = NULL;
        }

        current_size = 0;

        //copy old values
        for(int i = 0 ; i<oldSize; i++){
            Node* temp = oldTable[i];
            while(temp != NULL){
                insert(temp -> key , temp->value);
                temp = temp->next;
            }

            if(oldTable[i] != NULL){
                delete oldTable[i];
            }

        }

        delete[] oldTable;

    }
public:
    HashTable(int size = 5){
        total_size = size;
        current_size = 0;

        table = new Node*[total_size];

        for(int i = 0 ; i<total_size ; i++){
            table[i] = NULL;
        }
    }

    void insert(string key, int val){  //O(1) avg
        int idx = HashFunction(key);

        Node* newNode = new Node(key, val);
        Node* head = table[idx]; //NULL

        newNode->next = table[idx];
        table[idx] = newNode;

        current_size++;

        double lambda = current_size / (double) total_size;
        if(lambda > 1){
            rehash();  //O(n) - worst
        }
    }

    bool exists(string key){
        int idx = HashFunction(key);
        Node* temp = table[idx];

        while(temp != NULL){
            if(temp->key == key){  //found
                return true;
            }
            temp = temp->next;
        }
        return false;
    }

    int search(string key){
        int idx = HashFunction(key);
        Node* temp = table[idx];

        while(temp != NULL){
            if(temp->key == key){  //found
                return temp->value;
            }
            temp = temp->next;
        }

        return -1;
    }

    void remove(string key){
        int idx = HashFunction(key);

        Node* temp = table[idx];
        Node* prev = temp;
        while(temp != NULL){        //O(lambda)
            if(temp->key == key) { //erase
                if(prev == temp) { //head
                    table[idx] = temp->next;
                }else{
                    prev->next = temp->next;
                }
                break;
            }

            prev = temp;
            temp = temp->next;
        }
    }

    void print(){

        for(int i=0 ; i<total_size; i++){
            cout<<"idx"<<i<<"->";
            Node* temp = table[i];
            while(temp!=NULL) {
                cout <<"("<< temp->key <<","<<temp->value <<") -> ";
                temp = temp->next;
            }
            cout<<endl;
        }
    }
};

int main(){
    HashTable ht(5);

    ht.insert("India",150);
    ht.insert("china",150);
    ht.insert("us",50);
    ht.insert("Nepal",10);
    ht.insert("UK",20);

    ht.remove("China");
    ht.print();
    cout << "----\n";
    ht.remove("UK");
    ht.print();


    if(ht.exists("India")){
        cout << "India population : " << ht.search("India")<<endl;
    }
    return 0;
}
//time complexity --> in avg case = O(1)
                //--> in worst case = O(n)