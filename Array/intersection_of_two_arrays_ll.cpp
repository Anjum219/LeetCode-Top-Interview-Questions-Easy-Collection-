#include<bits/stdc++.h>
#define ll long long int

using namespace std;

vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    vector <int> intersection;

    sort( nums1.begin(), nums1.end());
    sort( nums2.begin(), nums2.end());

    int i = 0;
    int j = 0;

    int m = nums1.size();
    int n = nums2.size();

    while( i < m && j < n ){
        if( nums1[i] < nums2[j] ){
            i++;
        }
        else if( nums1[i] > nums2[j] ){
            j++;
        }
        else{
            intersection.push_back(nums1[i]);
            i++;
            j++;
        }
    }

    return intersection;
}

int main(){
    vector <int> nums1 = {1,2,2,1};
    vector <int> nums2 = {2,2};
    vector <int> num = intersect(nums1, nums2);

    for( int i = 0; i < num.size(); i++ ){
        cout<<num[i]<<' ';
    }

    return 0;
}
