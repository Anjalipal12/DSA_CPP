#include<bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<string, vector<string> , greater<string>>pq;
    pq.push("Hello World");
    pq.push("c++");
    pq.push("alpha");
    pq.push("apna college");
    while(!pq.empty()){
        cout<<"top: "<<pq.top()<<endl;
        pq.pop();
    }
    return 0;
}