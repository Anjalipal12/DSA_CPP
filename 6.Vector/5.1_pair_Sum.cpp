#include<iostream>
#include<vector>
using namespace std;

vector<int> pairsum(vector<int>& numbers, int target) {
        int st = 0 ; int end = numbers.size()-1;
        int currsum = 0; 

        while(st<end){
            currsum = numbers[st] + numbers[end];
            if(currsum == target){
                return {st+1,end+1};
            }else if (currsum > target){
                end -- ;
            }else{
                st++;
            }
        }
        return{};
}
int main(){
    vector<int> vec = {2,7,11,15};
    int target = 9;
    vector<int>ans = pairsum(vec , target);
    cout<<ans[0]<<","<<ans[1]<<endl;
    return 0;
}
