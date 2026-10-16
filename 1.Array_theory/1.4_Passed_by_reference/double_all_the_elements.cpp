#include<iostream>
using namespace std;

void doubleArray(int marks[] , int n){
    for(int i = 0 ; i<= n-1 ; i++){
        marks[i] *= 2;  // parameters sa aaya hua element ko update karna ha
                        //modify original array

    }
}

int main(){
    int marks[5] = {10,20,30,22,40};
    int n = sizeof(marks)/sizeof(int);
    doubleArray(marks,n);
    
    cout<<"Double of all elements present in marks";
    for(int i = 0; i<=n-1 ; i++){
        cout<<marks[i]<<" ";
    }
    return 0;

}
// void ka matlab ha ki function kuch return nahi karega 
// yaah void iseliya use kiya ha kyuki array original hi change ho raah ha , alag se return karna ki jaroorat nhi ha.
//rule --> agar function sirf kaam karega return nahi dega tab hum void use karte ha
