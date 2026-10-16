#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    // functin to count freq of target in sorted array
    int countfreq(vector<int>&arr,int target){
        int n = arr.size();
        int low = 0 ; int high = n-1;
        int first = -1; int last = -1; // to store ocurrances

        // first occurances
        while(low <= high){
            //calculate middle index
            int mid = low + (high - low)/2;

            // if target found
            if(arr[mid] == target){
                first = mid;       // store index
                high = mid - 1;    // move left to find earlier occurances
            }
            
            // if target is greater
            else if(arr[mid] < target){
                low = mid + 1;        // search right side
            }
            
            // if target is smaller
            else{
                high = mid - 1;
            }
        }

        //last occurances
       
        while(low <= high){

            // calculate the middle index
            int mid = low + (high - low)/2;

            //if target found
            if(arr[mid] == target){
                last = mid;         // store index
                low = mid + 1;      // move right to find later occurances
            }
            
            // if target is greater
            else if(arr[mid] < target){
                low = mid + 1;      //search right side
            }
            
            //if target is smaller
            else{
                high = mid -1; //search left side
            }
        }

        // if element is not found
        if(first == -1) return 0;
        return last - first + 1;
    }

};
int main(){
    vector<int> arr = {2,4,6,8,8,8,11,13};
    int x;

    cout<<"enter the element that you want to found: "<<endl;
    cin>>x;

    solution obj;

    int result = obj.countfreq(arr,x);

    cout<<"Frequency: "<<result;
    return 0;


}