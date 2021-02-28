#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int countPrimes(int n) {
    if( n == 0 || n == 1 )
        return 0;

    bool numbers[n];
    for( int i = 0; i < n; i++ ){
        numbers[i] = true;
    }

    for( int i = 2; i*i < n; i++ ){
        if( numbers[i] == false ){
            continue;
        }
        else{
            for( int j = i*i; j < n; j+=i ){
                numbers[j] = false;
            }
        }
    }

    int p = 0;
    for( int i = 2; i < n; i++ ){
        if( numbers[i] == true )
            p++;
    }

    return p;
}

int main(){
    cout<<countPrimes(100)<<endl;

    return 0;
}
