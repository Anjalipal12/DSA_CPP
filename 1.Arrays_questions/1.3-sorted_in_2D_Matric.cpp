#include<iostream>
using namespace std;

bool searchinmatrix(int matrix[][4] , int target){
    int n = 4;
    int m = 4;
    int i = 0; int j = m-1;

    while(i < n && j>=0){
        if(matrix[i][j]==target){
            return true;
        }
        else if(matrix[i][j] < target){
            i++;
        }
        else{
            j--;
        }

    }
    return false;
}
int main(){
    int matrix[4][4] = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target = 3;
    
    if (searchinmatrix(matrix,target)){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }
    return 0;
}