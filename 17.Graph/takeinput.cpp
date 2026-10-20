#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    vector<int>arr[n+1];

    for(int i = 1; i<m ; i++){
        int x; int y;
        cin>>x>>y;

        arr[x].push_back(y);
        arr[y].push_back(x);
    }

    for(int i = 0 ; i<n; i++){
        cout<<i<<" -> ";
        for(int j = 0 ; j<arr[i].size() ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}