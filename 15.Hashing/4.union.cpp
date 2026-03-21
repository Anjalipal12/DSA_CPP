#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
#include<string>
using namespace std;

void printunion(vector<int> arr1, vector<int> arr2) {
    unordered_set<int>s;

    for(int el : arr1){
        s.insert(el);
    }

    for(int el : arr2){
        s.insert(el);
    }
    //print union
    for(int el : s){
        cout<< el <<" ";
    }
    cout<<endl;
}


int main(){
    vector<int> arr1 = {7,3,9};
    vector<int> arr2 = {6,3,9,2,9,4};

    cout<<"union : ";
    printunion(arr1, arr2);
    
    return 0;
}