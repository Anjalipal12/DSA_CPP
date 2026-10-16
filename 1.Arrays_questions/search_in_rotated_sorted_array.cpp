#include<iostream>
#include<algorithm>
using namespace std;

int maxproduct(int *nums , int n){
    int maxTillNow = nums[0]; // sabse  bada product abhi tak
    int minTillNow = nums[0]; // sabse small product abhi tak
    int ans = maxTillNow;

    for(int i = 0 ; i<n ; i++){
        int curr = nums[i];

        //temp mein store kar lo kyuki nicha mintillnow badal jayega
        int tempMaxTillNow = max(curr, max(maxTillNow*curr , minTillNow*curr));
        //minimum bhi calculate karna jaroori ha
        minTillNow = min(curr,min(maxTillNow*curr , minTillNow*curr));
        //ab update kar do
        maxTillNow = tempMaxTillNow;
        //answer ko update kare 
        ans = max(ans,maxTillNow);
    }
    return ans;
}
int main(){
    int nums[] = {2,3,-2,4};
    int n = sizeof(nums)/sizeof(int);
    cout<<"maximum product subarray = "<< maxproduct(nums,n);
    return 0;
}
