 # include<iostream>
 using namespace std;

 int searchsortedarray(int *nums , int n , int target){
    int low = 0 ;
    int high = n-1;
    // there are three cases:

    //case1. find mid
     while(low <= high){
            int mid = low + (high - low)/2;
            if (nums[mid] == target){
                return mid;
            }

    // case 2 : left half is sorted        
            if(nums[mid] >= nums[low]){
                
                // means target is present then go to left side 
                if( target >= nums[low] && target <= nums[mid]){
                high = mid - 1;
                }
                else{  // means here target is not present then go to right side
                    low = mid + 1;
                }                   
                
            }
    // case 3 : right side is sorted   
            else{
                if(target >= nums[mid+1] && target <= nums[high])
                low = mid+1;
                else{
                    high = mid-1; 
                }
            }
        }
        return -1;

}

int main(){
    int arr[] = {4,5,6,7,0,1,2};
    int n = sizeof(arr)/sizeof(int);
    int target = 0;
    int index = searchsortedarray(arr,n, target);

    if(index!=-1){
        cout<< "Found at index" << index << endl;
    }
    else{
        cout<< "not Found" << endl;
    }
    return 0;

}
// time complexity = o(logn)
