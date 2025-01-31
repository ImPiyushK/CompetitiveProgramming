#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);

int main() {

    fastio

    long long x;
    cin >> x;

    long long t = 1; 
    for(long long i = 2 ; ; i++){
        t *= i;
        if(t == x){
            cout << i;
            break;
        }
    }

    return 0;
}