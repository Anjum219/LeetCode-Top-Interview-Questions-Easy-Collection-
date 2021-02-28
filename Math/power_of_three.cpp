#include<bits/stdc++.h>
#define ll long long int

using namespace std;

bool isPowerOfThree(int n) {
    if( n <= 0 ){
        return false;
    }

    if( n == 1 ){
        return true;
    }

    while( n%3 == 0 ){
        n = n/3;
        if( n == 1 ){
            return true;
        }
    }

    return false;
}

int main(){
    cout<<isPowerOfThree(81)<<endl;

    return 0;
}
