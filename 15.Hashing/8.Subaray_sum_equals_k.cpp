#include<bits/stdc++.h>
using namespace std;

int subarrayCountWithk(vector<int> arr, int k) {
    unordered_map<int, int> m; //sum, count
    m[0] = 1;
    int sum = 0; int ans = 0;

    for(int j = 0 ; j<arr.size() ; j++){
        sum += arr[j];
        if(m.count(sum-k)){
            ans += m[sum-k];
        }

        if(m.count(sum)){
            m[sum]++;
        }else{
            m[sum] = 1;
        }
    }
    return ans;
}
int main(){
    vector<int> arr = {1,2,3};
    int k = 3;

    cout<<"subarray count = " << subarrayCountWithk(arr,k) <<endl;
    return 0;
}