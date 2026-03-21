#include<bits/stdc++.h>
using namespace std;

int largestSubWith0sum(vector<int> arr){
    //map(sum -> index)
    unordered_map<int, int>m; //sum , idx
    int sum = 0; int ans = 0;

    // step 2: prefix sum
    for(int j = 0 ; j<arr.size(); j++){
        sum += arr[j];

    // step 3: check repeat    
        if(m.count(sum)){
            int currlen = j - m[sum]; //j-idx
            //ans ko update karo
            ans = max(ans, currlen);
        }else{
            // nhi mila
            m[sum] = j;
        }
    }
    return ans;
}
int main(){
    vector<int> arr = {15,-2,2,-8,1,7,10};
    cout<< " Largest subarray with sum 0 : "<<largestSubWith0sum(arr) <<endl;
    return 0;
}