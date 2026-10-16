#include<iostream>
#include<climits>
using namespace std;
//1. brute force solution
void subarraysum(int *arr , int n){
    for(int start = 0 ; start<n ; start++){
        for(int end = start ; end<n ; end++ ){
            int currsum = 0;
            for(int i = start ; i<=end ; i++){
                
                currsum += arr[i];
            }
            cout<<currsum<<",";
        }
        cout<<endl;
    }
}


//2. better solution ---> with the output as a maximum sum of array
void maxsubarray(int *arr , int n){
    int maxsum = INT_MIN; 
    for(int i = 0 ; i<n ; i++){
        int currsum = 0;
        for(int j = 0 ; j<n ; j++){
            currsum += arr[j];
            maxsum = max(maxsum , currsum);
        }
        cout<<endl;
    }
    cout<<"maximum subarray sum "<<maxsum<<endl;
}


//3. Kadane's algorithm
void maxsumofarray(int *arr , int n){
    int maxsum = INT_MIN;
    int currsum = 0;
    for(int i = 0 ; i<n ; i++){
        currsum += arr[i];
        maxsum = max(maxsum , currsum);
        if(currsum < 0 ){
            currsum = 0;
        }
    }
    cout<<"maximum subarray sum "<<maxsum<<endl;
}
int main(){
    int arr[] = {2,-3,6,-5,4,2};
    int n = sizeof(arr)/sizeof(int);
    subarraysum(arr,n);
    maxsubarray(arr,n);
    return 0;
}