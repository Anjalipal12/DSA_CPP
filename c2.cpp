#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;   // no of test cases

    while(t--){

        int n;
        cin >> n; //size of array

        vector<long long> a(n), b(n);

        //input array a
        for(int i = 0 ; i<n ; i++){
            cin >> a[i];
        }

        //input array b
        for(int i = 0 ; i<n ; i++){
            cin >> b[i];
        }

        long long sum = 0;
        long long mx = 0;
        for(int i = 0 ; i<n ; i++){
            sum += max(a[i], b[i]);
            mx = max(mx, min(a[i], b[i]));
        }
        cout<<sum + mx <<endl;
    }
    return 0;
}