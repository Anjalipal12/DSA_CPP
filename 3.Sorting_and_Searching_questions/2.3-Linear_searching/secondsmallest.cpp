#include<iostream>
#include<climits>
using namespace std;

int secondSmallest(int *arr, int n){
    int min1 = INT_MAX;
    int min2 = INT_MAX;

    for(int i = 0 ;i<=n-1 ; i++){
        if(arr[i] < min1){
            min2 = min1;
            min1 = arr[i];
        }
        else if(arr[i]<min2){
            min2 = arr[i];
        }
    }
    cout<<"second largest number: "<<min2;
    
}


int main(){
    int arr[] = {4,1,3,5,2};
    int n = sizeof(arr)/sizeof(int);

    secondSmallest(arr, n);

}