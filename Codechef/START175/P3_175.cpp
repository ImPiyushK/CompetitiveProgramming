#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    
    // Count zeros in each string.
    vector<int> zeros(3, 0);
    zeros[0] = count(s1.begin(), s1.end(), '0');
    zeros[1] = count(s2.begin(), s2.end(), '0');
    zeros[2] = count(s3.begin(), s3.end(), '0');
    
    int totalZeros = zeros[0] + zeros[1] + zeros[2];
    
    // Only valid totalZeros are 0, N, 2*N, or 3*N.
    if(totalZeros != 0 && totalZeros != n && totalZeros != 2*n && totalZeros != 3*n) {
        cout << -1 << "\n";
        return;
    }
    
    // Already uniform cases.
    if(totalZeros == 0 || totalZeros == 3*n) {
        cout << 0 << "\n";
        return;
    }
    
    int ans = INT_MAX;
    // Case: exactly one string should be all 0's and two strings all 1's.
    if(totalZeros == n) {
        for(int i = 0; i < 3; i++){
            // Cost for making string i all 0's is the number of 1's in it.
            int cost = n - zeros[i];
            ans = min(ans, cost);
        }
    } 
    // Case: exactly two strings should be all 0's and one string all 1's.
    else if(totalZeros == 2*n) {
        for(int i = 0; i < 3; i++){
            // Cost for making string i all 1's is the number of 0's in it.
            int cost = zeros[i];
            ans = min(ans, cost);
        }
    }
    cout << ans << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
