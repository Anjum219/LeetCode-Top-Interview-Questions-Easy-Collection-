#include<bits/stdc++.h>
#define ll long long int

using namespace std;

vector<vector<int>> generate(int numRows) {
    vector<vector<int>> triangle;
    triangle.push_back({1});    // first row

    for( int i = 1; i < numRows; i++ ){
        vector<int> row;
        row.push_back(1);   // first element of each row

        for( int j = 1; j < triangle[i-1].size(); j++ ){
            row.push_back(triangle[i-1][j-1] + triangle[i-1][j]);
            // inner elements of each row
        }

        row.push_back(1);   // last element of each row
        triangle.push_back(row);
    }

    return triangle;
}

int main(){
    vector<vector <int>> nums = generate(6);

    for( int i = 0; i < nums.size(); i++ ){
        for( int j = 0; j < nums[i].size(); j++ ){
            cout<<nums[i][j]<<' ';
        }
        cout<<endl;
    }

    return 0;
}
