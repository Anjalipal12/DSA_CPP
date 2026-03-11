#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
        // functin to maximum element in the array
    int findmax(vector<int> &v){

        int maxi = INT_MIN; //sabse chotta possible value
        for(int i = 0 ; i<v.size(); i++){
            maxi = max(maxi, v[i]); // agar v[i] bada hai toh maxi update hoga
        }
        return maxi; // array ka maximum element return
    }

    // function to calculate total hours needed
    int calculateTotalHourse(vector<int> &v, int hourly){
        int totalH = 0; // total hours store karega

        for(int i = 0 ; i<v.size(); i++){
            // ceil use karte ha agar pile complete nhi hua
            // to next hour lagega
            totalH += ceil((double)v[i] / (double)hourly);
        }
        return totalH;  // total hours return
    }

    //main function to find minimum eating speed
    int minimumRateToEatBananas(vector<int> v, int h){
        int low = 1;       // minimum speed possible
        int high = findmax(v); //maximum speed  = max pile

        while(low <= high){
            int mid = (low + high) / 2; //mid speed
            int totalH = calculateTotalHourse(v,mid); //hours calculate

            //agar hours allowed time se kam ya equal hai
            if(totalH <= h){
                // speed kam karne ki try karte ha
                high = mid -1;
            }else{
                //speed slow hai -> badhani padegi
                low = mid + 1;
            }
        }
        return low;
    }

};
int main(){
    vector<int> piles = {3,6,7,11};
    int h = 8;

    solution obj;
    int ans = obj.minimumRateToEatBananas(piles,h);
    cout<<"Minimum speed: "<<ans<<endl;
    return 0;
}
