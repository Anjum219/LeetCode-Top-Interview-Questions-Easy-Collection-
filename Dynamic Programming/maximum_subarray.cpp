#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int maxSubArray(vector<int>& nums) {
    int max_sum = -100001;
    int sum = 0;

    for( int i = 0; i < nums.size(); i++ ){
        sum += nums[i];

        if( nums[i] > sum )
            sum = nums[i];

        if( sum > max_sum )
            max_sum = sum;
    }

    return max_sum;
}

int main(){
    vector <int> nums = {-2,1,-3,4,-1,2,1,-5,4};

    cout<<maxSubArray(nums)<<endl;

    return 0;
}
