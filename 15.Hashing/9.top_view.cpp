#include<bits/stdc++.h>
using namespace std;

// Node class
class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = right = NULL;
    }
};

// build tree using preorder (-1 = NULL)
Node* buildTree(vector<int>& preorder, int &i){
    if(i >= preorder.size() || preorder[i] == -1){
        i++;
        return NULL;
    }

    Node* root = new Node(preorder[i++]);

    root->left = buildTree(preorder, i);
    root->right = buildTree(preorder, i);

    return root;
}

// Top View function
void topView(Node* root){
    if(root == NULL) return;

    queue<pair<Node*, int>> q;  // node + HD
    map<int, int> m;            // HD → node value

    q.push({root, 0});

    while(!q.empty()){
        Node* curr = q.front().first;
        int currHD = q.front().second;
        q.pop();

        // first time HD aaye → store karo
        if(m.find(currHD) == m.end()){
            m[currHD] = curr->data;
        }

        if(curr->left){
            q.push({curr->left, currHD - 1});
        }

        if(curr->right){
            q.push({curr->right, currHD + 1});
        }
    }

    // print answer
    for(auto it : m){
        cout << it.second << " ";
    }
    cout << endl;
}

int main(){
    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};

    int i = 0;
    Node* root = buildTree(preorder, i);

    topView(root);

    return 0;
}