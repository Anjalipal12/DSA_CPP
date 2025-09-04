#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);

    for(int i = 0 ; i<=n-1 ; i++){
        for(int j = i;j<n;j++){
            cout<<"("<<i<<","<<j<<")";
        }
        cout<<endl;
    }
    return 0;
}