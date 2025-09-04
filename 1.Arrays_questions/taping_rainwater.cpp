#include<iostream>
using namespace std;

// Function to calculate trapped water
int tapingRainwater(int *height, int n){
    int leftmax[20000], rightmax[20000]; // arrays to store left & right max heights

    // ----------------------------
    // Step 1: Calculate Left Max
    // ----------------------------
    leftmax[0] = height[0]; // first element ka left max us khud ka height hai
    for(int i = 1; i<n; i++){
        // Har index pe leftMax = us index tak ka maximum bar height
        leftmax[i] = max(leftmax[i-1], height[i]);
    }

    // ----------------------------
    // Step 2: Calculate Right Max
    // ----------------------------
    rightmax[n-1] = height[n-1]; // last element ka right max us khud ka height hai
    for(int i = n-2; i>=0; i--){
        // Har index pe rightMax = us index se right end tak ka maximum bar height
        rightmax[i] = max(rightmax[i+1], height[i]);
    }

    // ----------------------------
    // Step 3: Calculate Water trapped
    // ----------------------------
    int watertrapped = 0;
    for(int i = 0; i<n; i++){
        // Har index pe paani tabhi rukega jab dono side (left & right) bars bade ho
        // Us index pe possible paani = min(leftmax[i], rightmax[i]) - height[i]
        int currwater = min(leftmax[i], rightmax[i]) - height[i];

        // Negative water ka matlab koi paani store nahi hoga
        if(currwater > 0){
            watertrapped += currwater;
        }
    }

    // Final result print
    cout<<"water trapped: "<<watertrapped<<endl;
    return watertrapped;
}

int main(){
    // Example heights of bars
    int height[] = {4,2,0,6,3,2,5};
    int n = sizeof(height)/sizeof(int); // number of elements

    tapingRainwater(height,n); // function call
    return 0;
}
