#include<iostream>
#include<climits>
using namespace std;

void maxSubarray(int *arr , int n){
    int maxsum = INT_MIN;
    int currsum = 0;

    for(int i = 0 ; i<=n-1 ; i++){
        currsum += arr[i];
        maxsum = max(maxsum,currsum);
        if(currsum<0){
            currsum = 0;
        }
    }
    cout<<"maximum subarray sum " <<maxsum<<endl;
}

int main(){
    int arr[6] = {2,-3,6,-5,4,2};
    int n = sizeof(arr)/sizeof(int);
    maxSubarray(arr,n);
    return 0;
}