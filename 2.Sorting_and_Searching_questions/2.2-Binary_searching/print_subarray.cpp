#include<iostream>
using namespace std;

int printsubarray(int arr[] , int n){
    for(int start = 0 ; start<n ; start++){
        for(int end = start ; end<n ; end++){
            cout<<"("<<start<<","<<end<<")";
        }
        cout<<endl;
    }
}
int main(){
    int arr[] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(int);
    
    int subarray = printsubarray(arr,n);
    cout<<"Print subarray"<<subarray<<endl;
    return 0;
}