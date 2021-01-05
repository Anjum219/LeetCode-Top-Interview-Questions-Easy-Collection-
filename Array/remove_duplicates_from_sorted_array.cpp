#include<bits/stdc++.h>

using namespace std;

int removeDuplicates(vector<int>& nums) {
    int uniq = 0;

    if( nums.size() == 0 )
        uniq--;

    for( int i = 1; i < nums.size(); i++ ){
        if( nums[i] != nums[i-1] ){
            uniq++;
            nums[uniq] = nums[i];
        }
    }

    return uniq+1;
}

int main(){
    vector <int> nums;
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);

    int u = removeDuplicates(nums);

    cout<<u<<", nums = [";
    for( int i = 0; i < u-1; i++ ){
        cout<<nums[i]<<", ";
    }
    cout<<nums[u-1];
    cout<<']'<<endl;

    return 0;
}
