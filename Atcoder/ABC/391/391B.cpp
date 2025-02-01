#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, m;
    cin >> n >> m;
    vector<string> s(n),t(m);
    for(int i = 0; i < n; i++) 
        cin >> s[i];
    for(int i = 0; i < m; i++) 
        cin >> t[i];

    for(int i = 0 ; i <= n - m ; ++i){
        for(int j = 0 ; j <= n - m ; ++j){
            bool ok = true;
            for(int x = 0 ; x < m ; ++x){
                for(int y = 0 ; y < m ; ++y){
                    if(s[x+i][y+j] != t[x][y])
                        ok = false;
                }
            }
            if(ok){
                cout << i + 1 << ' '  << j + 1;
                return 0;
            }
        }
    }

    return 0;
}