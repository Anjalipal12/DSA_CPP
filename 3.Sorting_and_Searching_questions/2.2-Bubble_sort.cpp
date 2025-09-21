/*
ques1 --> implement Bubble Sort
Input: [5, 1, 4, 2, 8]
Output: [1, 2, 4, 5, 8]
Bubble Sort ko descending order me likho.*/

#include <iostream>
using namespace std;

void print(int arr[] , int n){
    for (int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void bubblesort(int arr[], int n ){
    for (int i=0 ; i<n-1 ; i++){
        for(int j = 0; j<n-i-1 ; j++){
            if(arr[j] < arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
            
        }
    }
    print(arr,n);
}

int main(){
    int arr[]={5,1,4,2,8};
    int n = sizeof(arr)/sizeof(int);
    bubblesort(arr , n);
    return 0;
}
   

