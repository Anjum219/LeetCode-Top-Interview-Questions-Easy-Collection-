#include<bits/stdc++.h>
#define ll long long int

using namespace std;

string common_prefix(string s1, string s2){
    if( s1 == "" || s2 == "" )
        return "";

    int m = s1.length();
    int n = s2.length();
    int x, y;
    string str_x, str_y;

    if( m >= n ){
        x = m;
        y = n;
        str_x = s1;
        str_y = s2;
    }
    else{
        x = n;
        y = m;
        str_x = s2;
        str_y = s1;
    }

    int i = 0;
    for( ; i < n; i++ ){
        if( str_x[i] != str_y[i] )
            break;
    }

    return str_y.substr(0, i);
}

string longestCommonPrefix(vector<string>& strs) {
    if( strs.size() == 0 )
        return "";

    string common = strs[0];
    for( int i = 1; i < strs.size(); i++ ){
        if( common == "" )
            return common;

        common = common_prefix(strs[i], common);
    }

    return common;
}

int main(){
    vector <string> strs = {"flower","flow","flight"};
    cout<<longestCommonPrefix(strs)<<endl;
    return 0;
}
