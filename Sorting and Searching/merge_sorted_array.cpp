#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i = m-1;
    int j = n-1;
    int k = m+n-1;

    while( i > -1 && j > -1 ){
        if( nums1[i] >= nums2[j] ){
            nums1[k] = nums1[i];
            i--;
        }
        else if( nums2[j] > nums1[i] ){
            nums1[k] = nums2[j];
            j--;
        }
        k--;
    }

    while( j > -1 ){
        nums1[k] = nums2[j];
        j--;
        k--;
    }
}

int main(){
    vector <int> nums1;
    vector <int> nums2;
    int m = 3;
    int n = 3;

    nums1.push_back(1);
    nums1.push_back(2);
    nums1.push_back(3);
    nums1.push_back(0);
    nums1.push_back(0);
    nums1.push_back(0);

    nums2.push_back(2);
    nums2.push_back(5);
    nums2.push_back(6);

    merge(nums1, m, nums2, n);

    for( int i = 0; i < m+n; i++ ){
        cout<<nums1[i]<<' ';
    }

    return 0;
}
