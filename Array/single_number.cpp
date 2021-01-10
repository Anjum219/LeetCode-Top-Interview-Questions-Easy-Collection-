#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int singleNumber(vector<int>& nums) {
    int single = 0;
    for( int i = 0; i < nums.size(); i++ ){
        single = single xor nums[i];
    }
    return single;
}

int main(){
    vector <int> nums = {4,1,2,1,2};
    cout<<singleNumber(nums)<<endl;

    return 0;
}
