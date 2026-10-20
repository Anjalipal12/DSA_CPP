#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ; int m;
    cin>>n>>m;

    vector<pair<int,int>>arr[n+1];

    for(int i = 0 ; i<=n ; i++){
        int u , v, w;
        cin>>u,v,w;

        arr[u].push_back({u,w});
        arr[v].push_back({v,w});
    }

    for(int i = 1; i<=n ; i++){
        cout<<i<<"->";
        for(auto it: arr[i]){
            cout<<"(" << it.first <<" , "<<it.second <<")";
        }
        cout<<endl;
    }
    return 0;
}