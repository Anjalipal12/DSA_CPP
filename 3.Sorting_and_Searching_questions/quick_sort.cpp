#include<iostream>
#include<vector>
using namespace std;

int partition(int arr[] , int st , int end);

//Recurssive
void quicksort(int arr[] , int st , int end){
    if(st<end){
        int pivIdx = partition(arr,st,end);
        quicksort(arr , st , pivIdx - 1);
        quicksort(arr , pivIdx + 1 , end);
    }

}
//partition
int partition(int arr[] , int st , int end){
    int i = st-1 , pivot = arr[end];
    for(int j = st ; j<end ; j++){
        if(arr[j]<=pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    i++;
    swap(arr[i],arr[end]);
    return i ;
}

int main(){
    int arr[] = {5,2,6,4,1,3};
    int n = sizeof(arr)/sizeof(int);
    quicksort(arr,0,n-1);
    for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
    }

    return 0;
}