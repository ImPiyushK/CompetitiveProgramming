//https://www.codechef.com/problems/STABARR
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &it : a)
        cin >> it;
    
    int count = 0, st = a[n - 1], ans = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] >= st)
            {
                st = a[i];
                ans = max(ans, count);
                count=0;
            }
            else
            {
                count++;
            }
        }
        ans = max(ans, count);

        cout << ans << "\n";
}

int main() {
	int t;
	cin >> t;
	while(t--){
	    solve();
	}

}