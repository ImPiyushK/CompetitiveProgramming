#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
#define line cout << '\n'
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define p(ans) cout<<(ans)<<'\n'
#define f first
#define s second

#define PI 3.1415926535897932384626433832795l
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void solve() {
    int n, m, l, r; 
    cin >> n >> m >> l >> r;
    
    int diff = n - m;
    l = abs(l);
    if (l >= diff) {
        l -= diff;
        diff = 0;
    }
    else {
        diff -= l;
        l = 0;
    }
    cout << -l << " " << r - diff << '\n';
}

int main() {

    fastio

    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }
    return 0;
}
