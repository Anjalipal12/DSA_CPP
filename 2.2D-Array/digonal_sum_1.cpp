#include<iostream>
using namespace std;

int diagonalsum(int mat[3][3],int n ,int m){
    int sum = 0;
    for(int i = 0 ; i<n ; i++){
        //primary diagonal
        sum += mat[i][i];
        //secondary diagonal
        if(i != n-i-1){
            sum += mat[i][n-i-1];
        }
        cout<<"sum = "<<sum<<endl;
        
    }
    return sum;
}
int main(){
    int mat[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    diagonalsum(mat,3,3);
    
    return 0 ;
}