#include<iostream>
#include<climits>
using namespace std;

void maxprofit(int *price , int n){
    int bestbuy[100000];
    bestbuy[0] = INT_MAX; 

    //bestbuy price
    for(int i = 1 ; i<n ; i++){
        bestbuy[i] = min(bestbuy[i-1],price[i-1]); //comparinf previous selling price and buying price
    }

    //Profit
    int maxProfit = 0;
    for(int i = 0 ; i<n ; i++){
        int currprofit = price[i] - bestbuy[i];
        maxProfit = max(maxProfit,currprofit);
    }
    cout<<"Maximum Profit "<<maxProfit<<endl;
}
int main(){
    int price[] = {7,1,5,3,6,4};
    int n = sizeof(price)/sizeof(int);
    maxprofit(price , n);
    return 0;
}