#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int ti = 0;
    int position = n;
    while (position > 0) {
        ti++;
        if (position == 1 || position == 3) {
            cout << ti << '\n';
            return;
        }
        position -= (position > 3) ? 2 : 1;
    }
    cout << ti << '\n';
}

int main() {
	int t;
	cin >> t;
	while(t--){
	    solve();
	}
}
