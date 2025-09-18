#include<iostream>
using namespace std;

int smallestindex(int *arr , int n , int target){
    int low = 0 ; int high = n-1;
    int ans = -1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid] == target){
            ans = mid;
            high = mid - 1;
        }else if(target > arr[mid]){
            low = mid + 1;
        }else{
            high = mid -1;
        }
    }
    return ans;
    
}
int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    int target = 4;
    int index = smallestindex(arr , n , target);
    cout<<target<<" appears at index "<<index;
    return 0;

}