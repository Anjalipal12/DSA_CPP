#include<iostream>
using namespace std;

//even = 0 and odd = 0
int main(){
    int marks[5] = {2,4,5,6,7};
    int n = sizeof(marks)/sizeof(int);

    int even = 0; int odd = 0;
    for(int i = 0; i<=n-1 ; i++){
        if(marks[i]%2 == 0){
            even++;
        }
        else{
            odd++;
        }  
    }
    cout<<"even = "<<even<<endl;
    cout<<"odd = "<<odd <<endl;
    return 0;

}