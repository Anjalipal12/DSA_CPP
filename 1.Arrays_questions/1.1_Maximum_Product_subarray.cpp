#include<iostream>
using namespace std;

int maxProduct(int *nums , int n){
    int ans = nums[0];
    int maxi = nums[0];
    int mini = nums[0];

    for(int i = 0; i<=n-1 ; i++){
        if(nums[i]<0){
            int temp = mini;
            mini = maxi;
            maxi = temp;
        }

        mini = min(mini*nums[i],nums[i]);
        maxi = max(maxi*nums[i],nums[i]);

        ans = max(ans,maxi);
    }
    return ans;
}

int main(){
    int arr[] = {-2,8,-6};
    int n = sizeof(arr)/sizeof(int);
    int index = maxProduct(arr,n);

    cout<<"maximum product "<<index<<endl;
    return 0;


}