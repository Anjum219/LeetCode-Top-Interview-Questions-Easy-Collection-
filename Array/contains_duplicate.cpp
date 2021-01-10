#include<bits/stdc++.h>
#define ll long long int

using namespace std;

bool containsDuplicate(vector<int>& nums) {
    map <int, int> dup;
    for( int i = 0; i < nums.size(); i++ ){
        if( dup[nums[i]] == 0 ){
            dup[nums[i]]++;
        }
        else{
            return true;
        }
    }
    return false;
}

int main(){
    vector <int> nums = {1,2,3,1};
    if( containsDuplicate(nums) == false )
        cout<<"false"<<endl;
    else
        cout<<"true"<<endl;

    return 0;
}
