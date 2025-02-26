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
    int n;
    cin >> n;
    string s;
    cin >> s;

    if(n < 3){
        cout << 0 << '\n';
        return;
    }

    int m = 0, u = 0;
    for (char c : s) {
        if (c == '-') 
            m++;
        else 
            u++;
    }
    if (m < 2 || u == 0) {
        cout << 0 << '\n';
    } else {
        cout << (1LL * m * m / 4) * u << '\n';
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
