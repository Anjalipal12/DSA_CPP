#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
#include<string>
using namespace std;

int countDistinct(vector<int> arr){
    unordered_set<int> s;  // store the unique element

    for(int i=0; i<arr.size(); i++){
        s.insert(arr[i]);   // duplicate automatically ignore
    }
    
    for(int el: s){
        cout<< el <<" ";
    }
    cout << endl;
    return s.size(); // total uniquely elements

}

int main(){
    vector<int> arr = {4,3,2,5,6,7,3,4,2,1};

    cout<< "count = "<<countDistinct(arr) <<endl;
    return 0;
}