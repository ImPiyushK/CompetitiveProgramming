#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; ++i)
			cin >> a[i];

		int x = 0, y = 0;
		for (int i = 0; i < n; i++) {
			if (i % 2 == 0)
				x += a[i];
			else
				y += a[i];
		}
		cout << max(x, y) << '\n';
	}
}
