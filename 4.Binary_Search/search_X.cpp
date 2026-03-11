#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
    int search(vector<int> &nums, int target){
        int st = 0;
        int end = nums.size()-1;
        while(st<end){
            int mid = st + (end - st)/2;
            if(nums[mid] == target){
                return mid;
            }else if(nums[mid] > target){
                end = mid -1;
            }else{
                st = mid + 1; 
            }
        }
        return -1;
    }
};
int main(){
    vector<int> nums = {-1,0,3,5,9,12};
    int x;

    cout<<"Enter a element to search: ";
    cin>>x;

    solution obj;
    int result = obj.search(nums,x);

    if(result != -1){
        cout<<"element found at index"<<result;
    }else{
        cout<<"Element not found";
    }
    return 0;
}
