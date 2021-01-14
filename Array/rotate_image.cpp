#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();
    int r = n - 1; //last row of a cycle
    int c = n - 1; //last column of a cycle
    int temp;

    for( int i = 0; i < n/2; i++ ){
        for( int j = i; j < r; j++ ){
            temp = matrix[i][j];
            matrix[i][j] = matrix[c][i];
            matrix[c][i] = matrix[r][c];
            matrix[r][c] = matrix[j][r];
            matrix[j][r] = temp;
            c--;
        }
        r--;
        c = r;
    }
}

int main(){
    vector <vector <int> > nums = {{1,2},{3,4}};
    rotate(nums);

    for( int i = 0; i < nums.size(); i++ ){
        for( int j = 0; j < nums[i].size(); j++ ){
            cout<<nums[i][j]<<' ';
        }
        cout<<endl;
    }

    return 0;
}
