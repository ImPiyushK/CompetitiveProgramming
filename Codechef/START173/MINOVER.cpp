// #include <bits/allocator.h>
// #pragma GCC optimize("O3,unroll-loops")
// #pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include "bits/stdc++.h"
using namespace std;
using ll = long long int;
 
int main()
{
    ios::sync_with_stdio(false); cin.tie(0);
 
    int t; cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        vector<int> a(n), b(m);
        for (int &x : a) cin >> x;
        for (int &x : b) cin >> x;
 
        // rotate(begin(b), ranges::min_element(b), end(b)); // Bring the smallest element of b to the front
        rotate(b.begin(), min_element(b.begin(), b.end()), b.end());
        if (m == 1) {
            for (int i = 0; i < n; ++i) cout << min(a[i], b[0]) << ' ';
            cout << '\n';
            continue;
        }
        
        for (int i = 0; i+m <= n; ++i) {
            if (a[i] < b[0]) continue;
 
            bool replace = true;
            if (a[i] == b[0]) {
                replace = false;
                for (int j = 0; j < m; ++j) {
                    if (a[i+j] == b[j]) continue;
                    if (a[i+j] < b[j]) break;
                    replace = true;
                    break;
                }
            }
 
            if (!replace) continue;
 
            for (int j = i; j < n; ++j)
                a[j] = b[0];
            for (int j = 0; j < m; ++j)
                a[n-1-j] = b[m-1-j];
            break;
        }
 
        for (int x : a) cout << x << ' ';
        cout << '\n';
    }
}