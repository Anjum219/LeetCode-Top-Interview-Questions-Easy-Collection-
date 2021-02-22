#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int maxProfit(vector<int>& prices) {
    int min_price = 10001;
    int max_profit = 0;

    for( int i = 0; i < prices.size(); i++ ){
        if( prices[i] < min_price )
            min_price = prices[i];
        else if( prices[i] - min_price > max_profit )
            max_profit = prices[i] - min_price;
    }

    return max_profit;
}

int main(){
    vector <int> nums = {7,1,5,3,6,4};

    cout<<maxProfit(nums)<<endl;

    return 0;
}
