#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int myAtoi(string s) {
    int i = 0;
    int sign = 1;
    int answer = 0;

    while( i < s.length() && s[i] == ' ' ){
        i++;
    }

    if( i < s.length() && ( s[i] == '+' || s[i] == '-' ) ){
        sign = ( s[i] == '-' ) ? -1 : 1;
        i++;
    }

    while ( i < s.length() && s[i] >= '0' && s[i] <= '9') {
        if ( answer > INT_MAX / 10 ||
                ( answer == INT_MAX / 10 && s[i] - '0' > INT_MAX % 10)) {
            return ( sign == 1 ) ? INT_MAX : INT_MIN;
        }
        answer = answer * 10 + (s[i] - '0');
        i++;
    }

    return answer * sign;
}

int main(){
    string str = "-91283472332";
    cout<<myAtoi(str)<<endl;

    return 0;
}
