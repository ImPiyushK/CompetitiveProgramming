#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    unordered_map<int, int> mp;
    for (int i = 0 ; i < n ; ++i){
        int x;
        cin >> x;
        mp[x]++;
    }
    
    int res = 0;
    vector<int> t;
    for(auto it = mp.begin() ; it != mp.end() ; ++it){
        if(it->first == 0)
            t.push_back(0);
        else if(it->second == 1)
            res++;
        else if(it->second % 2 == 0){
            t.push_back(0);
        }
        else{
            res++;
            t.push_back(0);
        }
    }
    if(t.size() >= 1)
        res++;
    
    cout << res << '\n';
    
}

int main() {
	int t;
	cin >> t;
	while(t--){
	    solve();
	}
    return 0;
}

//              OR


#include <bits/stdc++.h>
using namespace std;

int minLength(vector<int>& A) {
    // Count frequencies
    unordered_map<int, int> freq;
    for (int x : A) {
        freq[x]++;
    }
    
    // Count elements that will remain after operations
    int remaining = 0;
    
    // Process non-zero elements
    int zeros = 0;
    for (auto& [val, count] : freq) {
        if (val != 0) {
            remaining += count % 2;  // Keep odd elements (1 remains)
            zeros += count / 2;      // Each pair generates a zero
        } else {
            zeros = count;           // Original zeros
        }
    }
    
    // Process zeros
    // Key insight: If we have any zeros at all (even 1),
    // all zeros will reduce to exactly 1 zero at the end
    if (zeros > 0) {
        remaining += 1;
    }
    
    return remaining;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> A(n);
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        
        cout << minLength(A) << endl;
    }
    
    return 0;
}