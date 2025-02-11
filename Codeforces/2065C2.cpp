#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
#define im INT_MAX

void solve(){
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for(auto &it : a)
        cin >> it;
    for(auto &it : b)
        cin >> it;

    if(n <= 1){
        cout << "Yes\n";
        return;
    }

    sort(b.begin(), b.end());
    int cur = min(a[0], b[0] - a[0]);
    int x, y;
    for(int i = 1 ; i < n ; ++i){
        x = im, y = im;
        if(a[i] >= cur)
            x = a[i];
        int t = cur + a[i];
        auto it = lower_bound(b.begin(), b.end(), t);
        if(it != b.end())
            y = *it - a[i];

        int temp = min(x,y);
        if(temp == im){
            cout << "No" << '\n';
            return;
        }
        cur = temp;
    }
    cout << "Yes" << '\n';

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
}
