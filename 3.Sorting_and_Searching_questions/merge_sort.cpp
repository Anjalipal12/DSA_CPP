#include<iostream>
#include<vector>
using namespace std;

void mergesort(int arr[] , int l , int r ){
    if(l < r){
        int mid = l + (r-l)/2;

        //Divide two Half
        mergesort(arr , l , mid);
        mergesort(arr , mid+1 , r);

        //merge two half
        merge(arr , l , mid , r);
    }
}

void merge(int arr[] , int l , int mid , int r){
    vector<int> temp;
    int i = l ; int j = mid+1; 
    while(i<=mid && j<=r){
        if(arr[i]<=arr[mid]){
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    //left half
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    //right half
    while(j<=r){
        temp.push_back(arr[j]);
        j++;
    }
    for(int idx = 0 ; idx<temp.size() ; idx++){
        arr[idx+l] = temp[idx];
    }


}
int main(){
    int arr[] = {12,31,35,8,32,17};
    int n = sizeof(arr)/sizeof(int);
    mergesort(arr , 0 , n-1);

    cout<<"sorted array";
    for(int i = 0 ; i<n ; i++){
        cout<< arr[i] <<" ";
    }
    return 0;
}