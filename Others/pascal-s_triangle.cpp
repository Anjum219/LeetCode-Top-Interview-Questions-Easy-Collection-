#include<bits/stdc++.h>
#define ll long long int

using namespace std;

vector<vector<int>> generate(int numRows) {
    int add = 1;
    vector< vector<int> > triangle;

    if( numRows >= 1 ){
        vector<int> row1 = {1};
        triangle.push_back(row1);
    }

    for( int i = 1; i < numRows; i++ ){
        vector<int> one_row;
        one_row.push_back(1);

        for( int j = 1; j < add; j++ ){
            one_row.push_back(triangle[i-1][j-1] + triangle[i-1][j]);
        }

        one_row.push_back(1);
        triangle.push_back(one_row);
        add++;
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
