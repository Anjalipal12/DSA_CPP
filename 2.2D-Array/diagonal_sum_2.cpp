#include<iostream>
using namespace std;

int diagonalsum(int mat[3][3],int n ,int m){
    int sum = 0;
    for(int i = 0 ; i<n ; i++){
        //primary diagonal
        sum += mat[i][i];
        //secondary diagonal
        sum += mat[i][n-i-1];  
    }
    return sum;
}
int main(){
    int mat[3][3] = {{1,1,1},{1,1,1},{1,1,1}};
    diagonalsum(mat,3,3);
    cout<<diagonalsum(mat,3,3);
    
    return 0 ;
}