#include<iostream>
using namespace std;

bool sortedmatrix(int mat[][4] , int n , int m , int target){
    for(int i = 0 ; i<n ; i++){
        int low = 0 ; int high = m-1;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(mat[i][mid] == target){
                return true;
            }else if(mat[i][mid] < target){
                low = mid+1; 
            }else {
                high = mid - 1; 
            }
        }
    }
    return false;
}
int main(){
    int mat[4][4] = {{10,20,30,40} , {15,25,35,45} , {27,29,37,48} , {32,33,39,50}};
    int target = 33;
    if (sortedmatrix(mat , 4, 4 , target)){
        cout<<"found";
    }else{
        cout<<"not found";
    }
    
    return 0;
}