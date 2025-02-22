#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve(){
    string s;
    cin >> s;

    for(int i = 0 ; i < s.size() ; ++i){
        if(s[i] == '2')
            cout << '2';
    }
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
    freopen("output.in", "w", stdout);
    #endif

    fastio
    
    solve();

    return 0;
}