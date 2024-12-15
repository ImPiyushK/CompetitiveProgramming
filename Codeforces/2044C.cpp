#include <bits/stdc++.h>
using namespace std;
 
int main() { 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
 
    while(t--){
        int m, a, b, c;
        cin >> m >> a >> b >> c;
 
        int ma = m, mb = m;
        int ans = 0;
 
        if(ma >= a){
            ans += a;
            ma -= a;
        }
        else{
            ans += ma;
            ma = 0;
        }
        if(mb >= b){
            ans += b;
            mb -= b;
        }
        else{
            ans += mb;
            mb = 0;
        }
        if(ma+mb >= c)
            ans += c;
        else
            ans += ma + mb;
 
        cout << ans << endl;
    }
    return 0;
}