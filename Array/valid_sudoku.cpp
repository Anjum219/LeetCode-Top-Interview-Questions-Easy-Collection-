#include<bits/stdc++.h>
#define ll long long int

using namespace std;

bool isValidSudoku(vector<vector<char>>& board) {
    bool is_valid = true;

    for( int i = 0; i < board.size(); i++ ){
        map <char, int> row;
        map <char, int> col;
        map <char, int> box;

        for( int j = 0; j < board[i].size(); j++ ){
            if( board[i][j] != '.' ){
                if( row[board[i][j]] == 0 ){
                    row[board[i][j]] = 1;
                }
                else{
                    is_valid = false;
                    break;
                }
            }

            if( board[j][i] != '.' ){
                if( col[board[j][i]] == 0 ){
                    col[board[j][i]] = 1;
                }
                else{
                    is_valid = false;
                    break;
                }
            }

            int r = 3* (i/3) + j/3;
            int c = 3* (i%3) + j%3;
            if( board[r][c] != '.' ){
                if( box[board[r][c]] == 0 ){
                    box[board[r][c]] = 1;
                }
                else{
                    is_valid = false;
                    break;
                }
            }
        }

        if( is_valid == false )
            break;
    }

    return is_valid;
}

int main(){
    vector <vector <char> > nums = {{'8','3','.','.','7','.','.','.','.'},
        {'6','.','.','1','9','5','.','.','.'},
        {'.','9','8','.','.','.','.','6','.'},
        {'8','.','.','.','6','.','.','.','3'},
        {'4','.','.','8','.','3','.','.','1'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','6','.','.','.','.','2','8','.'},
        {'.','.','.','4','1','9','.','.','5'},
        {'.','.','.','.','8','.','.','7','9'}};

    cout<<isValidSudoku(nums)<<endl;

    return 0;
}
