#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr [] = {1,5,2,8};
    int n = sizeof(arr)/sizeof(int);
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    for(int i = 0 ; i<n ; i++){
        if(arr[i]>max1){
            max2 = max1;
            max1 = arr[i];
        }else if (arr[i]!=max1 && arr[i]>max2){
            max2 = arr[i];
        }
        cout<<"second largest number "<<max2<<endl;
    }
    return 0;

}