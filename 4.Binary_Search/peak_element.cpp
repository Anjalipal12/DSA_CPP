#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    int findPeakElement(vector<int>&nums){
        int n = nums.size();
        if(n==1) return 0;
        if(nums[0] > nums[1]) return 1;
        if(nums[n-1] > nums[n-2]) return n-1;
        
        int low = 1 ; int high = n - 1;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1]){
                return mid;
            }else if(nums[mid] > nums[mid+1]){
                high = mid-1;
            }else{
                low = mid + 1;
            }

        }
        return -1;
    }
};
int main(){
    Solution sol;
    vector<int> nums = {1,2,3,4,5,6};

    int peakIndex = sol.findPeakElement(nums);
    cout<<"Peak Element index : "<< peakIndex <<endl;
    cout<<"Peak Element value : "<< nums[peakIndex] <<endl;
    return 0;
}
