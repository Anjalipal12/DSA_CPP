#include<iostream>
#include<vector>
using namespace std;

class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        int n = arr.size();  // code here
        vector<int> count(n+1 , 0);
            for(int num: arr){
                count[num]++;
            }
            int duplicate = -1; int missing = -1;
            for(int i = 1 ; i<=n ; i++){
                if(count[i] == 2){
                    duplicate = i;
                }
                else if(count[i] == 0){
                    missing = i;
                }
            }
            return{duplicate , missing};
    }
};

int main(){
    Solution sol;
    vector<int> arr = {2,2};
    vector<int>  result = sol.findTwoElement(arr);
    cout << "Duplicate: " << result[0] << ", Missing: " << result[1] << endl;
    return 0;
}
