#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    
    vector<vector<int>> adj(n + 1);
    for (int i = 1; i < n; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    vector<char> ans(n + 1, '0');
    
    // Condition 1: If an edge connects two nodes with the same value
    for (int u = 1; u <= n; u++) {
        for (int v : adj[u]) {
            if (u < v && a[u] == a[v]) {
                ans[a[u]] = '1';
            }
        }
    }
    
    // Condition 2: If a value appears at least twice among neighbors of a node
    for (int v = 1; v <= n; v++) {
        if (adj[v].size() < 2) continue;
        unordered_map<int, int> freq;
        for (int u : adj[v]) {
            freq[a[u]]++;
        }
        for (auto [val, count] : freq) {
            if (count >= 2) {
                ans[val] = '1';
            }
        }
    }
    
    for (int i = 1; i <= n; i++) {
        cout << ans[i];
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
