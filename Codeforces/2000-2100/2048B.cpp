#include <bits/stdc++.h>
using namespace std ;

void solve(){
    int n,k;
        cin>>n>>k;
        vector<int>res(n,-1);
        int c=1;
        int x=k-1;
 
        while(x <= n-1) {
            res[x]=c;
            c++;
            x += k;
        }
 
        x = 0;
        while(x < n) {
            if(res[x] == -1) {
                res[x] = c;
                c++;
            }
            x++;
        }
        for(int i=0;i<n;i++) {
            cout << res[i] << ' ';
        }
        cout<<'\n';
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin >> t;
    while(t--){
        solve();        
    }
    return 0;
}