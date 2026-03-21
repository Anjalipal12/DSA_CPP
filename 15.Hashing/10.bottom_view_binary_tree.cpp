#include<bits/stdc++.h>
using namespace std;

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

//build tree (preorder , -1 = NULL)
Node* buildTree(vector<int>& preorder, int &i){
    if(i >= preorder.size() || preorder[i] == -1){
        i++;
        return NULL;
    }

    Node* root = new Node(preorder[i+1]);

    root->left = buildTree(preorder, i);
    root->right = buildTree(preorder, i);

    return root;
}

// Bottom View Function
void bottomView(Node* root){
    if(root == NULL) return;

    queue<pair<Node*, int>> q; // node + HD
    map<int, int>m;

    q.push({root, 0});

    while(!q.empty()){
        Node* curr = q.front().first;
        int hd = q.front().second;
        q.pop();

        //overwrite (last node store)
        m[hd] = curr->data;

        if(curr->left){
            q.push({curr->right, hd - 1});
        }

        if(curr->right){
            q.push({curr->right, hd + 1});
        }
    }

    //print bottom view
    for(auto it : m){
        cout<<it.second<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> preorder = {20,8,5,-1,-1,3,10,-1,-1,14,-1,-1,22,-1,25,-1,-1};

    int i = 0;
    Node* root = buildTree(preorder, i);

    bottomView(root);

    return 0;
}