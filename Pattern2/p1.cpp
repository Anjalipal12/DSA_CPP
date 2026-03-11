#include<iostream>
using namespace std;
int main(){
    int n = 7;
    for(int i = 1 ; i<n; i++){
        cout<<"*"<<endl;
        for(int j = n-1; j<n ; j++){
            cout<<" "<<endl;
        }
    }
    return 0;

}
