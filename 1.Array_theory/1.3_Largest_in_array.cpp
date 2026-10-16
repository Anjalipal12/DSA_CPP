#include<iostream>
using namespace std;

int main(){
    int marks[5] = {20,21,23,25,30};
    int n = sizeof(marks)/sizeof(int);
    //find the largest in array
    //1.assume that first element is largest
    int max = marks[0];
    for(int i = 0 ; i<=n-1 ; i++){
        if(marks[i]>max){
            max = marks[i];
            cout<<"assigning value "<<marks[i]<<" to max"<<endl;
        }
    }
    cout<<"largest elementt of an array "<<max<<endl;

    //2.assume that first element is smallest
    int scores[5];
    int m = sizeof(scores)/sizeof(int);

    //user input
    for(int i=0 ; i<=m-1 ; i++){
        cin>>scores[i];
    }
    //user output of largest number
    int min = scores[0];
    for(int i = 0 ; i<=m-1 ; i++){
        if(scores[i] < min){
            min = scores[i];
            cout<<"assigning value "<<scores[i]<<" 39 40 5to min"<<endl; 

        }

    }
    cout<<"smallest number"<<min<<endl;
    return 0;

}