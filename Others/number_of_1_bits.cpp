#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int hammingWeight(uint32_t n) {
    int bits = 32;
    uint32_t m = 1;
    int count = 0;

    for( int i = 0; i < bits; i++ ){
        if( (m&n) != 0 ){
            count++;
        }
        m *= 2;
    }

    return count;
}

int main(){
    uint32_t n = 00000000000000000000000000001011;
    cout<<hammingWeight(n)<<endl;

    return 0;
}
