#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    string t(n, 'z');   //create string zzz....z of size n
    if (s == t)
         cout << -1;
    else
        cout << t;
    cout << '\n';
}

int main() {
	int t;
	cin >> t;
	while(t--){
	    solve();
	}
}
