#include<iostream>
using namespace std;

int main(){
    int arr[5] = {2,3,5,3,2};
    int n = sizeof(arr)/sizeof(int);

    int ans = 0;
    for(int i = 0 ; i<=n-1 ; i++){
        ans ^= arr[i];
    }
    cout<<"element appear once "<<ans<<endl;
    return 0;

}