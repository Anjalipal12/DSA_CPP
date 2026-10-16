#include<iostream>
using namespace std;

int main(){
    int marks[3]={1,2,3};
    int n = sizeof(marks)/sizeof(int);
    
    bool sorted = true;
    for(int i = 0; i<=n-1 ; i++){
        if(marks[i]<marks[i-1]){
            sorted = false;
            break;
        }
    }
    if(sorted){
        cout<<"Array is sorted in ascending order"<<endl;
    }else{
        cout<<"Array is not sorted"<<endl;
    }
    return 0;
}