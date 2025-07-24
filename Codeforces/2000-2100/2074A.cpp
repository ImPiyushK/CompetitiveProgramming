#include<bits/stdc++.h>
using namespace std;

void solve(){
    int l,r,d,u;
    cin >> l >> r >> d >> u;

    if(abs(l) == r && abs(d) == u && r == u)
        cout << "YES" << '\n';
    else
        cout << "NO"  << '\n';
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}