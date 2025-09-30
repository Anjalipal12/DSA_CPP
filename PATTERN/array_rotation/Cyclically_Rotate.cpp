#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        reverse(nums.begin() , nums.end());
        reverse(nums.begin() , nums.begin() + k);
        reverse(nums.begin() + k , nums.end());
    }
};

int main(){
    vector<int>nums = {10,20,30,40,50};
    int n = nums.size();
    int k = 1;
    Solution obj;
    obj.rotate(nums,k);

    for(int x : nums) cout<<x<<" ";
    return 0;
}