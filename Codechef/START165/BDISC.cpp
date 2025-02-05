//https://www.codechef.com/problems/BDISC
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &it : a)
        cin >> it;
        
    int cost = 0;
    sort(a.begin(), a.end());
    cost += a[0];
    int t = 1;
    for(int i = 1 ; i < n ; ++i){
        cost += max(0, a[i] - t);
        t++;
    }
    cout << cost << '\n';
    
}

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
	    solve();
	}

}