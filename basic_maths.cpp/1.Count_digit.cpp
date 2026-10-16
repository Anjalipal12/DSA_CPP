#include<iostream>
using namespace std;

void count(int n){
    int count = 0;
    for(int i = 1;i<n ; i++){
        cout<<count;
        count++;
    }
}
int main(){
    int n = 1,4;
    count(n);
    return 0;
}