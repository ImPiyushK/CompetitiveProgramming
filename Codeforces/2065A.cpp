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

    if(s.size() == 2){
        cout << 'i' << '\n';
        continue;
    }

    for(int i = 0 ; i < s.size() - 2 ; ++i)
        cout << s[i];
    cout << 'i' << '\n';     
    }
    return 0;
}
