#include<bits/stdc++.h>
#define ll long long int

using namespace std;

bool isAnagram(string s, string t) {
    int chars = 26;
    int s_char[chars];
    int t_char[chars];

    for( int i = 0; i < chars; i++ ){
        s_char[i] = 0;
        t_char[i] = 0;
    }

    for( int i = 0; i < s.length(); i++ ){
        s_char[s[i]-'a']++;
    }

    for( int i = 0; i < t.length(); i++ ){
        t_char[t[i]-'a']++;
    }

    for( int i = 0; i < chars; i++ ){
        if( s_char[i] != t_char[i] )
            return false;
    }

    return true;
}

int main(){
    string s = "anagram";
    string t = "nagaram";
    cout<<isAnagram(s, t)<<endl;

    return 0;
}
