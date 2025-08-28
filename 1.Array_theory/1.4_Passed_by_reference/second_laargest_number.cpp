#include<iostream>
#include<climits>
using namespace std;

int main(){
    int marks[4] = {1,5,2,8};
    int n = sizeof(marks)/sizeof(int);

    int max1 = INT_MIN;
    int max2 = INT_MIN;

    //array ka sabhi numbers ko ine by one check kare
    for(int i =0 ; i<=n-1 ; i++){
        if(marks[i]>max1){
            max2 = max1;
            max1 = marks[i];
        }else if(marks[i]>max2<<marks[i]!=max1){
            max2 = marks[i];
        }
    }
    cout<<"second largest number = "<<max2<<endl;
    return 0;
}