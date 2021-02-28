#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int convert_single_roman_digit( char c ){
    int x;

    switch(c){
        case 'I':
            x = 1;
            break;
        case 'V':
            x = 5;
            break;
        case 'X':
            x = 10;
            break;
        case 'L':
            x = 50;
            break;
        case 'C':
            x = 100;
            break;
        case 'D':
            x = 500;
            break;
        case 'M':
            x = 1000;
            break;
    }

    return x;
}

int romanToInt(string s) {
    int n = s.length();
    int integers[n];

    integers[0] = convert_single_roman_digit(s[0]);
    for( int i = 1; i < n; i++ ){
        integers[i] = convert_single_roman_digit(s[i]);

        if( integers[i] > integers[i-1] )
            integers[i-1] = -1*integers[i-1];
    }

    int number = 0;
    for( int i = 0; i < n; i++ ){
        number += integers[i];
    }

    return number;
}

int main(){
    string s = "MCMXCIV";
    cout<<s<<" -> "<<romanToInt(s)<<endl;

    return 0;
}
