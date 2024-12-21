#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int N;
    cin >> N;

    vector<int> H(N);
    for (int i = 0; i < N; i++) {
        cin >> H[i];
    }

    unordered_map<int, vector<int>> height;

    for (int i = 0; i < N; i++) {
        height[H[i]].push_back(i);
    }

    int maxBuildings = 1;
    for (auto& it : height) {
        vector<int>& t = it.second;
        unordered_map<int, unordered_map<int, int>> dp;

        for (int i = 0; i < t.size(); i++) {
            for (int j = i + 1; j < t.size(); j++) {
                int d = t[j] - t[i];
                if (dp[t[i]].count(d)) {
                    dp[t[j]][d] = dp[t[i]][d] + 1;
                } else {
                    dp[t[j]][d] = 2;
                }
                maxBuildings = max(maxBuildings, dp[t[j]][d]);
            }
        }
    }
    cout << maxBuildings;

    return 0;
}
