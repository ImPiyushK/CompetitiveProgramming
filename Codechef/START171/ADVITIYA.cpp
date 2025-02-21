#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    string s;
	    cin >> s;
	    
	    string og = "ADVITIYA";
	    if(og == s){
	        cout << 0 << '\n';
	        continue;
	    }
	    int c = 0;
	    for(int i = 0 ; i < s.size() ; ++i){
	        if(s[i] != og[i]){
	           c += (og[i] - s[i] + 26) % 26;
	        }
	    }
	    cout << c << '\n';
	}
	return 0;
}

//  OR
//  if(og[i] < s[i]){
// 	                c += ('Z' - s[i]) + ('A' - og[i]);
// 	            }
// 	            else
// 	                c += og[i] - s[i];