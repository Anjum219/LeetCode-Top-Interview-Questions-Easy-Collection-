#include<bits/stdc++.h>
#define ll long long int

using namespace std;

vector<int> plusOne(vector<int>& digits) {
    int n = digits.size();
    vector <int> inc;
    int i;

    for( i = n-1; i >= 0; i-- ){
        if( digits[i] != 9 ){
            inc.push_back(digits[i] + 1);
            i--;
            break;
        }
        else{
            inc.push_back(0);
            if( i == 0 ){
                inc.push_back(1);
            }
        }
    }

    for( ; i >= 0; i-- ){
        inc.push_back(digits[i]);
    }

    reverse(inc.begin(), inc.end());

    return inc;
}

int main(){
    vector <int> nums = {9,9,9};
    nums = plusOne(nums);

    for( int i = 0; i < nums.size(); i++ ){
        cout<<nums[i]<<' ';
    }

    return 0;
}
