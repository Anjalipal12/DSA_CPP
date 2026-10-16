#include<iostream>
using namespace std;

void greaterElement(int *arr , int n , int k){
    for(int i = 0 ; i<=n-1 ; i++){
        if(arr[i]>k){
            cout<< arr[i];
        }
        cout<<endl;
    }

}



int main(){
    int arr[5] = {4,6,1,9,3};
    int n = sizeof(arr)/sizeof(int);
    int k = 4;

    greaterElement(arr , n , k);
    return 0;

}