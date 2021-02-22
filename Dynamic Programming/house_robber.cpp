#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int rob(vector<int>& nums) {
    int n = nums.size();
    if( n == 0 )
        return 0;

    if( n == 1 )
        return nums[0];

    if( n == 2 )
        return max( nums[0], nums[1] );

    if( n == 3 )
        return max( nums[0]+nums[2], nums[1] );

    int money[n];
    money[0] = nums[0];
    money[1] = nums[1];
    money[2] = nums[0] + nums[2];

    for( int i = 3; i < n; i++ ){
        money[i] = nums[i] + max( money[i-2], money[i-3] );
    }

    return max( money[n-1], money[n-2] );
}

int main(){
    vector <int> nums = {2,7,9,3,1};

    cout<<rob(nums)<<endl;

    return 0;
}
