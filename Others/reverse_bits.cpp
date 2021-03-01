#include<bits/stdc++.h>
#define ll long long int

using namespace std;

uint32_t reverseBits(uint32_t n) {
    stack<int> s;
    int cnt = 0;

    while( n != 0 ){
        s.push(n%2);
        n /= 2;
        cnt++;
    }

    while( cnt != 32 ){
        s.push(0);
        cnt++;
    }

    uint32_t r = 0;
    uint32_t mul = 1;
    for( int i = 0; i < 32; i++ ){
        r += mul * s.top();
        mul *= 2;
        s.pop();
    }

    return r;
}

int main(){
    uint32_t n = 00000010100101000001111010011100;
    cout<<reverseBits(n)<<endl;

    return 0;
}
