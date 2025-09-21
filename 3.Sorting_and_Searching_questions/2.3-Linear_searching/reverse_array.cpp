#include<iostream>
using namespace std;

void reverseArray(int *arr, int n){
    int i = 0; int j = n-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}

int main(){
    int arr[] = {5,4,3,9,2};
    int n = sizeof(arr)/sizeof(int);

    reverseArray(arr,n);
    cout<<"reversed array: ";
    for(int i = 0 ; i<=n-1 ; i++){
        cout<<arr[i];
    }
    return 0;
}