#include <iostream>      // input-output ke liye
#include <vector>        // vector use karne ke liye
#include <algorithm>     // sort function ke liye
using namespace std;

class Solution {
public:

    // Ye function check karta hai ki cows ko minimum distance 'd' par place kar sakte hain ya nahi
    bool canPlace(vector<int>& stalls, int cows, int d) {

        int count = 1;                 // first cow ko first stall me place kar dete hain
        int lastPos = stalls[0];       // last placed cow ki position

        // baaki stalls check karte hain
        for(int i = 1; i < stalls.size(); i++) {

            // agar current stall aur last placed cow ke beech distance >= d ho
            if(stalls[i] - lastPos >= d) {

                count++;               // new cow place kar do
                lastPos = stalls[i];   // last position update karo
            }

            // agar required cows place ho gayi
            if(count >= cows)
                return true;           // placement possible
        }

        return false;                  // placement possible nahi
    }

    // Ye main function maximum minimum distance find karta hai
    int aggressiveCows(vector<int>& stalls, int cows) {

        // stalls ko sort karte hain taaki distance easily check ho sake
        sort(stalls.begin(), stalls.end());

        int low = 1;                                       // minimum possible distance
        int high = stalls.back() - stalls.front();         // maximum possible distance
        int ans = 0;                                       // final answer store karne ke liye

        // binary search start
        while(low <= high) {

            int mid = low + (high - low) / 2;               // mid distance calculate

            // check karo cows ko 'mid' distance par place kar sakte hain ya nahi
            if(canPlace(stalls, cows, mid)) {

                ans = mid;          // possible hai to answer update karo
                low = mid + 1;      // aur bada distance try karo
            }
            else {

                high = mid - 1;     // possible nahi hai to distance kam karo
            }
        }

        return ans;                 // maximum minimum distance return
    }
};

int main() {

    int t;              // number of test cases
    cin >> t;

    while(t--) {        // loop t times chalega

        int n, cows;
        cin >> n >> cows;      // stalls ki number aur cows ki number

        vector<int> stalls(n);

        // stalls ki positions input lo
        for(int i = 0; i < n; i++)
            cin >> stalls[i];

        Solution obj;

        // answer print karo
        cout << obj.aggressiveCows(stalls, cows) << endl;
    }

    return 0;
}