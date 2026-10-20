#include<bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int>pq;
    pq.push(5);
    pq.push(10);
    pq.push(15);
    pq.push(2);
    pq.push(25);
    while(!pq.empty()){
        cout<<"top: "<<pq.top()<<endl;
        pq.pop();
    }
    return 0;
}