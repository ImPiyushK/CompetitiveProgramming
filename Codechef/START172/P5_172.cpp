#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(auto &it : a)
            cin >> it;
            
        set<int> s;
        for (int i = 0; i < n; ++i) {
            if (a[i] != i%2) 
                s.insert(i);
        }
        s.insert(0);
        
        int q;
        cin >> q;
        int p, x;
        while(q--){
            cin >> p >> x;
            p--;
            
            if (p) 
                s.erase(p);
            a[p] = x;
            if (a[p] != (p % 2)) 
                s.insert(p);

            int lst = *s.rbegin();
            cout << a[lst] << '\n';
        }
    }
}
