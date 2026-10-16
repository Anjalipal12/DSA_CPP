#include<iostream>
using namespace std;

int main(){
    int n = 5;
    for(int i = 1 ; i<n ;i++){
        //space
        for(int s = 1 ; s<n-i ; s++){
            cout<<" ";
        }

        // for left half
        for(int j = i ; j>=1 ; j--){
            cout<<j;
        }

        // for right half
        for(int j = 2 ; j<=i ; j++)
            cout<<j;
         
        cout<<endl;
    }
    return 0;
}