#include<iostream>
using namespace std;

void changeFirst(int *marks, int n ){
    marks[0] = 199;
}

int main(){
    int marks[5] ={10,20,30,40,50};
    int n = sizeof(marks)/sizeof(int); 
    changeFirst(marks,n);
    cout<<"change only the first element ";
    for(int i=0; i<=n-1 ; i++){
        cout<< marks[i]<<" ";
    }
    return 0;

}