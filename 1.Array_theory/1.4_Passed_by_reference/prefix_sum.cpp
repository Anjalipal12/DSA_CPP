#include<iostream>
using namespace std;

void prefixArray(int *arr , int n){
    int currsum = 0;
    cout<<"Prefix: ";
    for(int i = 0; i<=n-1 ; i++){
        currsum += arr[i];
        cout<<currsum;
        if(i != n-1) cout<<",";
    }
    
}

int main(){
    int arr[4]={1,2,3,4};
    int n = sizeof(arr)/sizeof(int);
    prefixArray(arr,n);

    return 0;
}