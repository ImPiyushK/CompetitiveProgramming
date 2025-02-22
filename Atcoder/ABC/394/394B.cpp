#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve(){
    int n;
    cin >> n;
    vector<string> s(n);
    for(int i = 0 ; i < n ; ++i){
        cin >> s[i];
    }

    sort(s.begin(), s.end(), []
        (const string& f, const string& s){
        return f.size() < s.size();
    });
    
    for(int i = 0 ; i < n ; ++i){
        cout << s[i];
    }
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
    freopen("output.in", "w", stdout);
    #endif

    fastio
    
    solve();

    return 0;
}