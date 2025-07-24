#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
#define line cout << '\n'
#define p(ans) cout<<(ans)<<'\n'
#define f first
#define s second

#define PI 3.1415926535897932384626433832795l
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void solve() {
    int x;
    cin >> x;

    if ((x & (x - 1)) == 0 || (x & (x + 1)) == 0) {
        cout << -1 << '\n';
    } else {
        int a = __builtin_ctz(x);
        int b = 0;
        while ((x & (1 << b)) != 0) {
            b++;
        }
        int t = (1 << a) | (1 << b);
        cout << t << '\n';
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
        solve();
    }
    return 0;
}
