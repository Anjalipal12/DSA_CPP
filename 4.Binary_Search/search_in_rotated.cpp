#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    int search(vector<int>&arr  , int k){
        int n = arr.size();
        int low = 0; int high = n-1;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(arr[mid] == k){
                return mid;
            }
            //left sorted
            if(arr[low] <= arr[mid]){
                if(arr[low] <= k && k <= arr[mid]){
                    high = mid -1;
                }else{
                    low = mid + 1;
                }
            }else{
                if(arr[mid]<=k && k<=arr[high]){
                    low = mid + 1;
                }else{
                    high = mid - 1;
                }
            }
        }
        return -1;
    }
};
int main(){
    vector<int> arr = {7,8,9,1,2,3,4,5,6};
    int target;

    cout<<"enter the number: ";
    cin>>target;

    solution obj;
    int result = obj.search(arr,target);

    cout<<result<<endl;

    return 0;

}