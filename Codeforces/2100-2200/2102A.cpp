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
    int n, m, p, q;
    cin >> n >> m >> p >> q;

     int k = n / p;
    int r = n % p;
    if (r == 0) {
        if (m == k * q)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    } else
        cout << "YES" << endl;
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
    // freopen("output.in", "w", stdout);
    #endif

    fastio

    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }
    return 0;
}
