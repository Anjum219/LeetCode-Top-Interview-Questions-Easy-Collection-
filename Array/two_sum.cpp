#include<bits/stdc++.h>
#define ll long long int

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    map <int, int> position;
    int rest;
    vector <int> indices;

    for( int i = 0; i < nums.size(); i++ ){
        rest = target - nums[i];
        if( position[rest] > 0 ){
            indices.push_back(position[rest] - 1);
            indices.push_back(i);
            break;
        }
        position[nums[i]] = i+1;
    }

    return indices;
}

int main(){
    vector <int> nums = {2,7,11,15};
    int target = 9;
    nums = twoSum(nums, target);

    for( int i = 0; i < nums.size(); i++ ){
        cout<<nums[i]<<' ';
    }

    return 0;
}
