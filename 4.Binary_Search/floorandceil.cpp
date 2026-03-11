#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    // function to find floor
    // floor = larget element <= target
    int findfloor(vector<int>&arr , int target){
        int low = 0; int high = arr.size()-1; 
        int ans = -1; // if floor is not found

        while(low <= high){
            //find middle
            int mid = low + (high - low)/2;
            //if element is less then or equal to target
            if(arr[mid] <= target){
                ans = arr[mid]; // store possible floor
                low = mid + 1;  // move right to find bigger possible floor
            }else{
                high = mid - 1; // move left
            }
        }
        return ans;
    }

    //function to find ceil
    //ceil = smallest element >= target
    int findceil(vector<int> &arr, int target){
        int low = 0;
        int high = arr.size()-1;
        int ans = -1;    // if ceil is not found

        while(low <= high){

            //find middle index
            int mid = low + (high - low)/2;
            //if element is >= target
            if(arr[mid] >= target){
                ans = arr[mid]; //store possible ceil
                high = mid -1;  // move left to find smaller possible ceil

            }else{
                low = mid + 1; //move right
            }
        }
        return ans;
    }
};
int main(){
    // sorted array
    vector<int> arr = {5,6,8,9,5,5,6};
    int x;

    cout<<"Enter the number: ";
    cin>>x;

    solution obj;

    //calling floor and ceil
    int floorvalue = obj.findfloor(arr,x);
    int ceilvalue = obj.findceil(arr,x);

    cout<<"Floor value: "<< floorvalue<<endl;
    cout<<"ceil value: "<<ceilvalue<<endl;
    return 0;

}

//1️⃣ Floor

Definition:
Floor = sabse bada element jo ≤ target ho

Example

Array:

1  2  4  6  8

Target:

5

Elements ≤ 5:

1  2  4

Sabse bada element = 4

✅ Floor = 4

2️⃣ Ceil

Definition:
Ceil = sabse chhota element jo ≥ target ho

Same array:

1  2  4  6  8

Target:

5

Elements ≥ 5:

6  8

Sabse chhota element = 6

✅ Ceil = 6

Visual Understanding
Array: 1   2   4   6   8
              ↑
           target = 5
Floor = 4
Ceil  = 6