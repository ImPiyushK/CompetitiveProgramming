#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int k, l1, r1, l2, r2;
        cin >> k >> l1 >> r1 >> l2 >> r2;

        int p = 1, ans = 0;
        while(p <= r2) {
            int t1 = max(l1, (l2 + p - 1)/ p);
            int t2 = min(r1, r2 / p);
        
            ans += max(0ll, t2 - t1 + 1);
            p *= k;
        }
        cout << ans << "\n";
    }
    return 0;
}