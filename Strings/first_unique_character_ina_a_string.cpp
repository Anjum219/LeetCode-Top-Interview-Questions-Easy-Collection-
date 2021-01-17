#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int firstUniqChar(string s) {
    int repeating[26];
    int serial[26];
    int first_position[26];
    for( int i = 0; i < 26; i++ ){
        repeating[i] = 0;
        serial[i] = -1;
    }

    int first_uniq = -1;
    int j = 0;
    for( int i = 0; i < s.length(); i++ ){
        int letter = s[i]-'a';
        repeating[letter]++;
        if( repeating[letter] == 1 ){
            serial[j] = letter;
            first_position[letter] = i;
            j++;
        }
    }

    for( int i = 0; i < j; i++ ){
        int letter = serial[i];
        if( repeating[letter] == 1 ){
            first_uniq = first_position[letter];
            break;
        }
    }

    return first_uniq;
}

int main(){
    string s = "loveleetcode";
    cout<<firstUniqChar(s)<<endl;

    return 0;
}
