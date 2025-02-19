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
