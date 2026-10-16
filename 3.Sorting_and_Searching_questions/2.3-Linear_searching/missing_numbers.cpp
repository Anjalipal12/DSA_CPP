#include<iostream>
using namespace std;

int  missingNumber(int arr[] , int n ,int m){
    int total = m*(m+1)/2;
    int sum = 0;
    for(int i = 0; i<=n-1; i++){
        sum += arr[i];
    }
    return total - sum;
}

int main(){
    int arr[] = {1,2,4,5};
    int n = sizeof(arr)/sizeof(int);
    int m = 5;
    cout<<"Missing Number"<<missingNumber(arr,n,m);
    return 0;
}