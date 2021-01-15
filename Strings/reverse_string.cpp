#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void reverseString(vector<char>& s) {
    int n = s.size();
    for( int i = 0; i < n/2; i++ ){
        char temp = s[i];
        s[i] = s[n-1-i];
        s[n-1-i] = temp;
    }
}

int main(){
    vector <char> s = {'h','e','l','l','o'};
    reverseString(s);

    for( int i = 0; i < s.size(); i++ ){
        cout<<s[i]<<' ';
    }

    return 0;
}
