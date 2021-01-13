#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void moveZeroes(vector<int>& nums) {
    int j = 0; //points future positions of elements
    for( int i = 0; i < nums.size(); i++ ){
        if( nums[i] != 0 ){
            nums[j] = nums[i];
            j++;
        }
    }

    for( ; j < nums.size(); j++ ){
        nums[j] = 0;
    }
}

int main(){
    vector <int> nums = {0,1,0,3,12};
    moveZeroes(nums);

    for( int i = 0; i < nums.size(); i++ ){
        cout<<nums[i]<<' ';
    }

    return 0;
}
