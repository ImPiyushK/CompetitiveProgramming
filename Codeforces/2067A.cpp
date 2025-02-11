#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long

void solve(){
    int x, y, n;
    cin >> x >> y;
    
    n = x + 1 - y;
    if(n >= 0 && n % 9 == 0)
        cout << "YES" << "\n";
    else
        cout << "NO" << "\n";
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("E:/Workspaces/eclipse-workspace(cpp)/input.in", "r", stdin);
    freopen("E:/Workspaces/eclipse-workspace(cpp)/output.in", "w", stdout);
    #endif

    fastio

    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}