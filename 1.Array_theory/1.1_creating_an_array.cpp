#include<iostream>
using namespace std;
int main(){

    //create the array
    int marks[50] = {1,2,3};
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<marks[4]<<endl;

    int age[]={1,2,3,4,5};
    cout<<age[0]<<endl;
    cout<<age[1]<<endl;
    cout<<age[2]<<endl;
    cout<<age[3]<<endl;
    cout<<age[4]<<endl;

    //Print the size of array
    int scores[5] = {10,20,30,40,50}; //5*4
    cout<<sizeof(scores)<<endl;

    //print the length of the array
    cout<<sizeof(scores)/sizeof(int);
    


}


