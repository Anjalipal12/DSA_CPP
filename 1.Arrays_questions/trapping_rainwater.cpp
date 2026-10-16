#include<iostream>
using namespace std;

void trap(int *height , int n){
    //left array
    int leftmax[20000];
    int rightmax[20000];
    leftmax[0] = height[0];
    for(int i = 1 ; i<n ; i++){
        leftmax[i] = max(height[i-1],leftmax[i-1]);
        cout<<leftmax[i]<<",";
    }

    //right array
    rightmax[n-1] = height[n-1];
    for(int i = n-2 ; i>=0 ; i--){
        rightmax[i] = max(height[i+1],rightmax[i+1]);
        cout<<rightmax[i]<<",";
    }

    //water trapped
    int waterTrapped = 0 ;
    for(int i = 0 ; i<n ; i++){
        int currwater = min(leftmax[i] , rightmax[i]) - height[i];
        if(currwater > 0){
            waterTrapped += currwater;
        }
    }
    cout<<"Water trapped"<<waterTrapped<<endl;
}
int main(){
    int height[7] = {4,2,0,6,3,2,5};
    int n = sizeof(height)/sizeof(int);
    
    trap(height , n);
}