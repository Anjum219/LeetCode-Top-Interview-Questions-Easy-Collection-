#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k = k % n;
    int temp;

    for( int i = 0; i < n/2; i++ ){
        temp = nums[i];
        nums[i] = nums[n-1-i];
        nums[n-1-i] = temp;
    }

    for( int i = 0; i < k/2; i++ ){
        temp = nums[i];
        nums[i] = nums[k-1-i];
        nums[k-1-i] = temp;
    }

    for( int i = k; i < k+(n-k)/2; i++ ){
        temp = nums[i];
        nums[i] = nums[n-1-i+k];
        nums[n-1-i+k] = temp;
    }
}

int main(){
    int k = 3;
    vector <int> v = {1,2,3,4,5,6,7};
    rotate(v, k);

    for( int i = 0; i < v.size(); i++ ){
        cout<<v[i]<<' ';
    }

    return 0;
}
