#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int maxProfit(vector<int>& prices){ //buy stock at the local miinimam price and sell stock at the local maximum price
    int buy = 0;
    int sell = 1;
    int state = buy;

    int buying_price = 0;
    int selling_price = 0;
    int profit = 0;
    int max_profit = 0;

    for( int i = 1; i < prices.size(); i++ ){
        if( state == buy ){
            if( prices[i] > prices[i-1] ){
                buying_price = prices[i-1];
                selling_price = prices[i];
                state = sell;
            }
        }
        else{
            if( prices[i] >= prices[i-1] ){
                selling_price = prices[i];
            }
            else{
                profit = selling_price - buying_price;
                max_profit += profit;
                state = buy;
            }
        }
    }

    if( state == sell ){
        profit = selling_price - buying_price;
        max_profit += profit;
    }

    return max_profit;
}

int main(){
    vector <int> v = {7, 1, 5, 3, 6, 4};
    int max_profit = maxProfit(v);
    cout<<max_profit<<endl;

    return 0;
}
