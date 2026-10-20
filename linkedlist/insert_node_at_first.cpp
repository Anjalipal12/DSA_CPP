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

//insert at head
void insertathead(Node*& head , int value){
    Node* temp = new Node(value);
    temp->next = head;
    head = temp;
}

//print list
void printlist(Node* head){
    Node* temp = head;
    while(temp != nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main(){
    int n; cin>>n;
    vector<int>arr(n);

    for(int i = 0 ; i<n; i++){
        cin>>arr[i];
    }

    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    //insert at 5 at head
    insertathead(head , 5);
    //printlist
    printlist(head);
    return 0;
}
