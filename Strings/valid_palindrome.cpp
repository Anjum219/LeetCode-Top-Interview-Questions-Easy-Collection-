#include<bits/stdc++.h>
#define ll long long int

using namespace std;

bool isPalindrome(string s) {
    string t = "";

    for( int i = 0; i < s.length(); i++ ){
        int ascii = s[i] - '0';
        if( 0 <= ascii && ascii <= 9 ){
            t += s[i];
            continue;
        }

        ascii = s[i] - 'A';
        if( 0 <= ascii && ascii <= 25 ){
            t += ascii + 'a';
            continue;
        }

        ascii = s[i] - 'a';
        if( 0 <= ascii && ascii <= 25 ){
            t += s[i];
        }
    }

    int n = t.length();
    for( int i = 0; i < n/2; i++ ){
        if( t[i] != t[n-i-1] ){
            return false;
        }
    }

    return true;
}

int main(){
    string s = "A man, a plan, a canal: Panama";
    cout<<isPalindrome(s)<<endl;

    return 0;
}
