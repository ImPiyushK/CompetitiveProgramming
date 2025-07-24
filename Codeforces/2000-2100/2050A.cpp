#include <bits/stdc++.h>
using namespace std;
 
int main() { 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<string> s(n);
        for(auto &it : s) cin >> it;
 
        int ans = 0;
        int c = 0;
 
        for (int i = 0; i < n; ++i)
        {
            ans += s[i].size();
            if(ans <= m) 
                c++;
            else
                break; 
        }
        cout << c << '\n';
    }
    return 0;
}