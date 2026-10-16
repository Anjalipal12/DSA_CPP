#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
    int upperbound(vector<int>&arr , int target){
        int low = 0; int high = arr.size()-1;
        while(low < high){
            int mid = low + (high - low)/2;
            if(arr[mid] <= target){
                low = mid + 1;
            }else{
                high = mid;
            }
        }
        return low;
    }
};
int main(){
    vector<int> arr = {2,3,7,10,11,11,25};
    int x;
    cout<<"enter the number: "<<endl;
    cin>>x;

    solution obj;
    int result = obj.upperbound(arr,x);

    cout<<"upper bound "<<result;
    return 0;
}