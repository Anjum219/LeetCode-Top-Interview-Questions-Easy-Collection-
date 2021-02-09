#include<bits/stdc++.h>
#define ll long long int

using namespace std;

string say(string s){
    string line = "";
    int c = 1;

    for( int i = 1; i < s.length(); i++ ){
        if( s[i] != s[i-1] ){
            line += ('0' + c);
            line += s[i-1];
            c = 1;
        }
        else{
            c++;
        }
    }

    line += ('0' + c);
    line += s[s.length()-1];

    return line;
}

string countAndSay(int n) {
    string s = "1";
    for( int i = 1; i < n; i++ ){
        s = say(s);
    }
    return s;
}

int main(){
    cout<<countAndSay(4)<<endl;

    return 0;
}
