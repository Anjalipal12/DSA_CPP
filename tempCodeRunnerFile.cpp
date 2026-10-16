#include<bits/stdc++.h>
using namespace std;

int largest(int arr[] , int n){
    int max = arr[0];
    for(int i = 0 ; i<n ; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        return max;
    }
}
int main(){
    int arr[] = {4,3,2,10};
    int n = sizeof(arr)/sizeof(int);

    cout<<largest(arr,n)<<endl;
    return 0;
}