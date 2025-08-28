#include<iostream>
using namespace std;

void print(int mat[3][3],int n){
    for(int i=0 ;i<n ; i++){
        for(int j =0 ; j<n ; j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"-------"<<endl;
}

void swap(int mat[3][3],int r1,int c1, int r2, int c2,int n){
    int temp = mat[r1][c1];
    mat[r1][c1] = mat[r2][c2];
    mat[r2][c2] = temp;

    print(mat,n);
}
int main(){
    int mat[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int n = 3;
    //Transpose
    for(int i=0 ; i<n ; i++){
        for(int j = i+1 ; j<n ; j++){
            swap(mat,i,j,j,i,n);
        }
    }

    // reverse
    for(int i = 0 ; i<n ; i++){
        int left = 0 ; int right = n-1;
        while(left<right){
            swap(mat,i,left,i,right,n);
            left++,right--;
        }
    }
    return 0;

}