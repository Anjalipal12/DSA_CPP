#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
    int lowerbound(vector<int>&arr , int target){
        int low = 0 ; int high = arr.size()-1;
        while(low < high){
            int mid = low + (high - low)/2;
            if(arr[mid] < target){
                low = mid + 1;
            }else{
                high = mid ;
            }

        }
        return low;
        
    }
    int upperbound(vector<int>&arr , int target){
        
    }
};
int main(){
    vector<int> arr = {1,2,2,3};
    int x;

    cout<<"Enter the number: ";
    cin>>x;

    solution obj;
    int result = obj.lowerbound(arr,x);

    cout<<"lower bound index: "<<result;

    return 0;

}