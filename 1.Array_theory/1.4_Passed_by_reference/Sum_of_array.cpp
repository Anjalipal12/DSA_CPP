#include<iostream>
using namespace std;

int sumArray(int marks[] , int n){  // int liya ha datatype toh return karega
    int sum = 0;
    for(int i= 0 ; i<=n-1 ; i++){
        sum += marks[i];
    }
    return sum;
}

int main(){
    int marks[5] = {10,20,30,40,50};
    int n = sizeof(marks)/sizeof(int);
    cout<<"sum of all elements "<<sumArray(marks , n);
    return 0;
}