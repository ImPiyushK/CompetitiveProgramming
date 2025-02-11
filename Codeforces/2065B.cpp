#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long


int main() {
    #ifndef ONLINE_JUDGE
    freopen("E:/Workspaces/eclipse-workspace(cpp)/input.in", "r", stdin);
    freopen("E:/Workspaces/eclipse-workspace(cpp)/output.in", "w", stdout);
    #endif

    fastio

    int t = 1;
    cin >> t;
    while(t--){
        string s;
        cin >> s;

        int n = s.size();

        bool flag = true;
        for(int i = 0 ; i < n - 1 ; ++i){
            if(s[i] == s[i+1])
                flag = false;
        }
        if(flag)
            cout << n << '\n';
        else
            cout << 1 << '\n';
    }
}
