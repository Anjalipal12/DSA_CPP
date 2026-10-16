#include<iostream>
using namespace std;

int subarray(int *arr , int n){
    for(int start = 0 ; start<n ; start++){
        for(int end = 0 ; end<n ; end++){
            cout<<"("<<start<<","<<end<<")";
        }
        cout<<endl;
    }
}
int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    subarray(arr , n);
    return 0;

}