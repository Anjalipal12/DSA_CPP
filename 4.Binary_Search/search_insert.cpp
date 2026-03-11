#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
    int search(vector<int>&arr , int target){
        int st = 0 ; int end = arr.size()-1;
        while(st < end){
            int mid = st + (end - st)/2;
            if(arr[mid] < target){
                st = mid + 1;   
            }else{
                end = mid;
            }
        }
        return st;
    }
};
int main(){
    vector<int>arr = {1,2,4,7};
    int x ; 

    cout<<"Enter the number: "<<endl;
    cin>>x;

    solution obj;
    int result = obj.search(arr,x);

    cout<<"search insert position: "<<result;
    cout<<"Element at that index : "<<arr[result];
    return 0;
}
