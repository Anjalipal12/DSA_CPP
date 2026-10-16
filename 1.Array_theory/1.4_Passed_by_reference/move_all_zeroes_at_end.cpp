#include<iostream>
using namespace std;

int main(){
    int arr[4] = {0,1,0,3};
    int n = sizeof(arr)/sizeof(int);
    int j = 0;
    for(int i = 0 ; i<=n-1 ; i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    for(int i = 0; i<=n-1 ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}