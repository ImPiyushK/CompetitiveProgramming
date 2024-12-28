#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n, k;
	    cin >> n >> k;
	    
	    if(n % 2 == 0 && k == n/2){
	        cout << "YES" << '\n';
	    }
	    else if(n % 2 != 0){
	        if(k == floor(n/2) || k == floor(n/2) + 1)
	            cout << "YES" << '\n';
	        else
	            cout << "NO" << '\n';
	    }
	    else
	        cout << "NO" << '\n';
	    
	}
	return 0;
}
