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
    int n, k;
    string s;
    cin >> n >> k;
    cin >> s;

    int c0 = 0, c1;
    for (char c : s) {
        if (c == '0') {
            c0++;
        }
    }
    c1 = n - c0;

    int badPairs = n / 2 - k;
    if (c0 < badPairs || c1 < badPairs) {
        cout << "NO\n";
        return;
    } 

    if (((c0 - badPairs) / 2) + ((c1 - badPairs) / 2) >= k) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("E:/Workspaces/CompetitiveProgramming/input.in", "r", stdin);
    freopen("E:/Workspaces/CompetitiveProgramming/output.in", "w", stdout);
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
