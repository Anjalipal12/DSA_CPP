#include<iostream>
using namespace std;

void reverseArray(int *marks , int n){
    int start = 0 ; int end = n-1;
    //sirf --> aak kaam kar raah ha 
    while(start < end){
        swap(marks[start] , marks[end]);
        start++;
        end--;
    }
    
   
}

int main(){
    int marks[6] = {10,20,30,40,50,60};
    int n = sizeof(marks)/sizeof(int);

    reverseArray(marks , n);
    cout<<"Reverse array using funtion ";
    for(int i = 0;i<=n-1;i++){
        cout<<marks[i]<<" ";
    }
}