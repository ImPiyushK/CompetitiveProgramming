#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    
    while(t--){
        int k, m;
        cin >> m >> k;
        string s;
        cin >> s;
        
        int x = 0;
        for (char c : s){
            if(c == 'S')
                x++;
        }
        if(x < k)
            cout << m + k - x - 1 << '\n';
        else
            cout << m << '\n';
    }
}
