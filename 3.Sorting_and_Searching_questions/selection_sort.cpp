#include<iostream>
using namespace std;

void selectionsort(int *arr , int n){
    for(int i = 0 ; i<n ; i++){
        int minIdx = i;
        for(int j = i+1 ; j<n ; j++){
            if(arr[j]<arr[minIdx])
            minIdx = j;
        }
        swap(arr[i] , arr[minIdx]);
    }
}
int main(){

    int arr[] = {5,4,1,3,2};
    int n = sizeof(arr)/sizeof(int);
    selectionsort(arr,n);

    //print sorted array
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}