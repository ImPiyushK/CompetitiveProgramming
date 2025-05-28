#include <bits/stdc++.h>
using namespace std;

bool isDivisible(vector<int> &a, int n){
  vector<bool> dp(3, false);
    
    for (int i = 0; i < n; ++i) {
        vector<bool> new_dp = dp; 
        new_dp[a[i] % 3] = true;

        for (int j = 0; j < 3; ++j) { 
          if (dp[j]) {
            new_dp[(j + a[i]) % 3] = true;
          }
        }
        dp = new_dp;
    }
    return dp[0];
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; ++i) 
            cin >> a[i];

        if (isDivisible(a, n))
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}