#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> p(n+1), q(n+1), ans(n+1);
    for (int i = 1; i <= n; i++)
        cin >> p[i];
    for (int i = 1; i <= n; i++)
        cin >> q[i];

    for (int i = 1; i <= n; i++)
        ans[q[i]] = q[p[i]];
    for(int i=1;i<=n;i++)
        cout << ans[i] << '\n';
}