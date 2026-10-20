#include<bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int , vector<int> , greater<int>>pq;
    pq.push(5);
    pq.push(39);
    pq.push(23);
    pq.push(2);
    while(!pq.empty()){
        cout<<"top: "<<pq.top()<<endl;
        pq.pop();
    }
    return 0;
}