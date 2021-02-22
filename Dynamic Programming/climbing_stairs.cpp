#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int climbStairs(int n) {
    int ways[n+2];
    ways[1] = 1;
    ways[2] = 2;

    for( int i = 3; i <= n; i++ ){
        ways[i] = ways[i-1] + ways[i-2];
    }

    return ways[n];
}

int main(){
    cout<<climbStairs(5)<<endl;

    return 0;
}
