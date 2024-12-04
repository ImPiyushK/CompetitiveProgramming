
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n, x;
	    cin >> n >> x;
	    vector<int> a(n);
	    vector<int> b(n);

	    
	    for(auto &it : a) cin >> it;
	    for(auto &it : b) cin >> it;
	    
	    vector<int> ans(n);
	    
	    for (int i = 0; i < n; i++) {
	        ans[i] = a[i] * b[i];
	    }
	    sort(ans.rbegin(), ans.rend());
	    
	    int sum = 0, c=0, z = -1;
	    for (int i = 0; i < n; i++) {
	        sum += ans[i];
	        c++;
	        if(sum >= x){
	            z = c;
	            break;
	            
	        }
	    }
	    cout << z << '\n';
	}
    return 0;
}
