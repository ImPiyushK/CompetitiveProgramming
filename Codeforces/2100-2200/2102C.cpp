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

    vector<vector<int>> v(n, vector<int>(n, 0));

        int value = 0;
        int top = 0, bottom = n - 1, left = 0, right = n - 1;

        while (top <= bottom && left <= right) {
            for (int i = left; i <= right; ++i){
                v[top][i] = value++;
            }
            top++;

            for (int i = top; i <= bottom; ++i){
                v[i][right] = value++;
            }
            right -= 1;

            if (top <= bottom) {
                for (int i = right; i >= left; --i){
                    v[bottom][i] = value++;
                }
                bottom -= 1;
            }

            if (left <= right) {
                for (int i = bottom; i >= top; --i)
                    v[i][left] = value++;
                left++;
            }
        }

        int maxv = n * n - 1;
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                v[i][j] = maxv - v[i][j];

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j)
                cout << v[i][j] << ' ';
            cout << "\n";
    }
}

int main() {
    // #ifndef ONLINE_JUDGE
    // freopen("input.in", "r", stdin);
    // freopen("output.in", "w", stdout);
    // #endif

    fastio

    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }
    return 0;
}
