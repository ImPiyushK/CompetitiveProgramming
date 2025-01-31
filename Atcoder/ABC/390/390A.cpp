#include <bits/stdc++.h>
using namespace std;
int main() {
	int n = 5;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n - 1; i++) {
		auto b = a;
		swap(b[i], b[i + 1]);
		if (b == vector<int>{1, 2, 3, 4, 5}) {
			cout << "Yes" << endl;
			return 0;
		}
	}
	cout << "No" << endl;
	return 0;
}