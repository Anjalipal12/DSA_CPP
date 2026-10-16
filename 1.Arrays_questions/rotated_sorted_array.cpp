#include<iostream>
using namespace std;

int rotatedsubarray(int *arr , int n , int target){
    int low = 0 ; int high = n-1;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(arr[mid] == target){
            return mid;
        }
        //left array is sorted
        if(arr[low] <= mid){
            if(arr[low] <= target && target <= mid){
            high = mid - 1;
            }
            else{
            low = mid + 1;
            }
        }
        
        //Right half
        else{
            if(target >= arr[mid] && target <= arr[high]){
            low = mid + 1;
            }
            else{
            high = mid-1;
            }
        }
    }
    return -1;
}
int main(){
    int arr[] = {7,9,1,2,3};
    int n = sizeof(arr)/sizeof(int);
    int target = 2;
    cout<<rotatedsubarray(arr , n , target);
    return 0;
}