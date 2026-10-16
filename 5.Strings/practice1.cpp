#include<iostream>
using namespace std;
int main(){
    char arr[5] = {'a','b','c','d','e'};
    cout<<arr<<endl;

    int i = 0 ;
    while(i<3){
        cout<<i<<" ";
        i++;
        if(i==2){
            continue;
            i++;
        }
    }
    return 0;
}