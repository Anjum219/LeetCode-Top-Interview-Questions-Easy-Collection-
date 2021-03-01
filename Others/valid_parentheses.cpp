#include<bits/stdc++.h>
#define ll long long int

using namespace std;

bool isValid(string s) {
    int left_paren = 0;
    int left_curl = 0;
    int left_brac = 0;
    stack <int> bag;

    for( int i = 0; i < s.length(); i++ ){
        if( s[i] == '(' ){
            left_paren++;
            bag.push('(');
        }
        else if( s[i] == '{' ){
            left_curl++;
            bag.push('{');
        }
        else if( s[i] == '[' ){
            left_brac++;
            bag.push('[');
        }
        else if( s[i] == ')' ){
            if( left_paren == 0 )
                return false;
            else if( bag.top() != '(' )
                return false;
            else{
                left_paren--;
                bag.pop();
            }
        }
        else if( s[i] == '}' ){
            if( left_curl == 0 )
                return false;
            else if( bag.top() != '{' )
                return false;
            else{
                left_curl--;
                bag.pop();
            }
        }
        else{
            if( left_brac == 0 )
                return false;
            else if( bag.top() != '[' )
                return false;
            else{
                left_brac--;
                bag.pop();
            }
        }
    }

    if( left_paren > 0 || left_curl > 0 || left_brac > 0 ){
        return false;
    }

    return true;
}

int main(){
    string s = "([)]";
    cout<<isValid(s)<<endl;

    return 0;
}
