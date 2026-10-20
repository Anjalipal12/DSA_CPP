#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int value;
    Node* next;

    Node(int value){
        data = next;
        next = nullptr;
    }
};

//insert node
void insert(Node* head , int value){
    //step 1: make new node whose name is temp
    Node* temp = new Node(value);

    //continue the loop until we do not get nullptr
    //if we get null ptr then connect the head -> next to the temp
    while(head->next != nullptr){
        head = head->next;
    }
    head->next = temp;
}

//print list
void printlist(Node)
int main(){
    int n; cin>>n;
    vector<int>arr(n);

    for(int i = 0 ; i<n; i++){
        cin>>arr[i];
    }

    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    insert(head,40);
    //print list
    printlist(head);

    return 0;
}