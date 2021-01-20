#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int strStr(string haystack, string needle) {
    if( needle == "" )
        return 0;

    int m = haystack.length();
    int n = needle.length();
    int track = 0;
    int pos = -1;

    for( int i = 0; i < m; i++ ){
        if( haystack[i] == needle[track] ){
            track++;
            if( track == n ){
                pos = i - n + 1;
                break;
            }
        }
        else{
            i -= track;
            track = 0;
        }
    }

    return pos;
}

int main(){
    string haystack = "hello";
    string needle = "ll";
    cout<<strStr(haystack, needle)<<endl;

    return 0;
}
