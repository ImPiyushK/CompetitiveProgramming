#include <bits/stdc++.h>
using namespace std;

int findMaxStreakValue(vector<int> a, int n){
     int curr = 1, maxx = 1;
	   bool magic = true;
	   for(int i = 0 ; i < n - 1 ; ++i){
	       if(a[i] <= a[i + 1]){
	           curr++;
	       }
	       else {
	           maxx = max(curr, maxx);
	           curr = 1;
	       }
	   }
	   maxx = max(curr, maxx);
	   
	   return maxx;
}

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n, x;
	    cin >> n >> x;
	    vector<int> a(n);
	    for(auto &it : a)
	        cin >> it;
	    
	    int ans = findMaxStreakValue(a, n);
	    for(int i = 0 ; i < n ; ++i){
	        int og = a[i];
	        a[i] *= x;
	        int t = findMaxStreakValue(a, n);
	        a[i] = og;
	        ans = max(ans, t);
	    }
	    cout << ans << '\n';
	}
}
