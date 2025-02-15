#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n;
    cin >> n;
    vector<ll> ar(n-1);
    ll sum = 0, t;
    for(ll i = 0 ; i < n - 1 ; ++i){
        cin >> t;
        sum += t;
    }
    ll tsum = n * (n +1 ) / 2;
    cout << tsum - sum;    

    return 0;
}
