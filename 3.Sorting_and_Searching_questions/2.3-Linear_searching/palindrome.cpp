#include<iostream>
using namespace std;

bool palindrome(int *arr, int n){
    for(int i = 0 ; i<=n-1 ; i++){
        if(arr[i] == arr[n-i-1])
        return true;
    }
    return false;

}

int main(){
    int arr[] = {1,2,3,2,1};
    int n =sizeof(arr)/sizeof(int);
    // hum if ka andar iseliya likh rahe taaki hum check kar sake ki palinfrome ha yaah function ya nhi
    if(palindrome(arr, n)){
        cout<< "Palindrome ha"<<endl;
    }else{
        cout<<"Not Palindrome";
    }

    return 0;
}