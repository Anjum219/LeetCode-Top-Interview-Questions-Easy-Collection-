#include<bits/stdc++.h>
#define ll long long int

using namespace std;

class Solution {
public:
    int n;
    vector<int> orig_nums;
    vector<int> shuffle_nums;

    void swap( int i, int j ){
        int temp = shuffle_nums[i];
        shuffle_nums[i] = shuffle_nums[j];
        shuffle_nums[j] = temp;
    }

    int random_pos( int min, int max ){
        return min + rand()%(max - min);
    }

    Solution(vector<int>& nums) {
        srand(time(0));
        n = nums.size();

        for( int i = 0; i < n; i++ ){
            orig_nums.push_back(nums[i]);
            shuffle_nums.push_back(nums[i]);
        }
    }

    vector<int> reset() {
        return orig_nums;
    }

    vector<int> shuffle() {
        for( int i = 0; i < n; i++ ){
            int j = random_pos(i, n);
            swap(i, j);
        }

        return shuffle_nums;
    }
};

int main(){
    vector <int> nums = {1, 2, 3, 4, 5};

    Solution* obj = new Solution(nums);

    nums = obj->shuffle();
    for( int i = 0; i < nums.size(); i++ ){
        cout<<nums[i]<<' ';
    }
    cout<<endl;

    nums = obj->reset();
    for( int i = 0; i < nums.size(); i++ ){
        cout<<nums[i]<<' ';
    }
    cout<<endl;

    nums = obj->shuffle();
    for( int i = 0; i < nums.size(); i++ ){
        cout<<nums[i]<<' ';
    }
    cout<<endl;

    return 0;
}
