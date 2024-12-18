//https://www.codechef.com/problems/REVALT
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    string s;
	    cin >> s;
	    
	    int l, r;
	    vector<int> bad_indices;
	    for (int i = 0; i < n - 1; i++) {
	        if(s[i] == s[i+1])
	            bad_indices.push_back(i);
	    }
	    int bad_count = bad_indices.size();
	    
	    if(bad_count > 2)
	        cout << "No" << '\n';
	    else if(bad_count == 0)
	        cout << "Yes" << '\n';
	    else if(bad_count == 1){
	        int x = bad_indices[0];
	        if(s[0] != s[x+1] || s[x+1] != s[n-1])
	            cout << "Yes" << '\n';
	        else
	            cout << "No" << '\n';
	    }
	    else if(bad_count == 2){
	        int x = bad_indices[0];
	        int y = bad_indices[1];
	        if(s[x] != s[y])
	            cout << "Yes" << '\n';
	        else
	            cout << "No" << '\n';
	    }
	    
	}

}
