#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n, k;
	    cin >> n >> k;
	    vector<int> a(n);
	    for(auto &it : a) cin >> it;
	    
	    int s = 0, pos = 0, neg = 0;
	    for (int i = 0; i < n; i++) {
	        if(a[i] < 0){
	            s += (a[i]/k);
	            if(a[i]%k != 0)
	                neg++;
	        }
	        else{
	            s += (a[i]/k);
	            if(a[i]%k != 0)
	                pos++;
	        }
	    }
	    if(s == 0){
	        cout << "YES" << '\n';
	        continue;
	    }
	    else if(s < 0){
	        int t = abs(s);
	        if(pos >= t)
	            cout << "YES" << '\n';
	        else
	            cout << "NO" << '\n';
	    }
	    else{
	    int t = abs(s);
	        if(neg >= t)
	            cout << "YES" << '\n';
	        else
	            cout << "NO" << '\n';
	    }
	}
    return 0;
}