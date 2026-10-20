#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    
    Node(int value){
        data = value;
        next = nullptr;
    }
};
int main(){
    int n; cin>>n;
    vector<int>arr(n);

    for(int i = 0 ; i<n; i++){
        cin>>arr[i];
    }

    //create first node
    Node* head = new Node(10);
    //create the second node
    head->next = new Node(20);
    //create the third node
    head->next->next = new Node(30);

    //print the linked list
    Node* temp = head;

    while(temp != nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    return 0;
}