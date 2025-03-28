#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n, c = 0;
	    cin >> n;
	    vector<int> h(n);
	    for(auto& it : h)
	        cin >> it;
	   for(int i = 0 ; i < n - 1 ; ++i){
	       if(h[n-1] > h[i])
	        c++;
	       else
	        break;
	   }
	   cout << n - (c + 1) << '\n';
	}

}
