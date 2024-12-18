#include <bits/stdc++.h>
using namespace std;

int solve(){
    int n, m, k;
	    cin >> n >> m >> k;
	    int min = INT_MAX;
	    for(int i = 1 ; i <= n ; ++i){
	        for(int j = 1 ; j <= m ; ++j){
	            if(2*(i+j) == k)
	                return 0;
	                if(min > abs(2*(i+j) - k))
	                    min = abs(2*(i+j) - k);
	        }
	    }
	    return min;
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    cout << solve() << '\n';
	}

}