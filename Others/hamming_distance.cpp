#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int hammingDistance(int x, int y) {
    int z = x^y;
    int cnt = 0;

    while( z != 0 ){
        unsigned bit = z & 1;
        if( bit == 1 )
            cnt++;
        z >>= 1;
    }

    return cnt;
}

int main(){
    int x = 1;
    int y = 4;
    cout<<hammingDistance(x, y)<<endl;

    return 0;
}
