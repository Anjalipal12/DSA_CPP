#include<iostream>
using namespace std;

int main(){
    //output and input of an array
    int marks[50] = {20,30,50,2,3};
    int n = sizeof(marks)/sizeof(int); //n= length

    //same kaam karna ha toh hum uska liya loop chala danga
    for(int i=0 ; i<=n-1 ; i++){
        cout<<marks[i]<<" ";
    }
    cout<<endl;

    //ma abb input sa hi la rahi hoo or input ko da rahi ho
    int scores[5];
    int m = sizeof(scores)/sizeof(int);
    
    // ek ek karke user sa input lega
    for(int i=0 ; i<=m-1 ; i++){
        cin>>scores[i];
    }

    //output print kar dega
    for(int i=0 ; i<=m-1 ; i++){
        cout<<scores[i]<<" ";
    }
    
    
    return 0;



}

