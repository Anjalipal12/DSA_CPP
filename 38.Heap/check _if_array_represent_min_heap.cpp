#include<bits/stdc++.h>
using namespace std;

bool is_min_heap(vector<int>& arr){
    int n = arr.size();
    for(int i = 0 ; i<=(n/2)-1 ; i++){
        //check for the left child
        if(arr[i] > arr[2*i+1]){
            return false;
        }
        //check for the right child
        if(2*i+2 && arr[i] > arr[2*i+2]){
            return false;
        }
    }
}
int main(){
    //min heap rule 
    //parent <= left child
    //parent <= right child
    // left child = 2*i+1
    //right child = 2*i+2
    int n ; cin>>n;
    vector<int>arr(n);
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
    is_min_heap(arr);
    return true;
}