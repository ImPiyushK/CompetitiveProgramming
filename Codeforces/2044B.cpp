#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
 
    while(t--){
        string a;
        cin >> a;
        int n = a.length();
        vector<char> b(n);
 
        for(int i = n - 1, j = 0 ; i >= 0 ; --i, j++){
            if(a[i] == 'p')
                b[j] = 'q';
            else if(a[i] == 'q')
                b[j] = 'p';
            else
                b[j] = 'w';
        }
        for(auto it : b)
            cout << it;
        cout << '\n';
        
    }
    return 0;
}