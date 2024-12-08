#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(auto &it : a)
            cin >> it;
        if(n == 1){
            cout << "YES" << '\n' << 1 << '\n';
            continue;
        }
        int x;
        bool flag = false;
        for(int i = 0 ; i < n ; ++i){
            x = a[i];
            int c = 0;
            for(int j = 0 ; j < n ; ++j){
                if(i == j)
                    continue;
                if(abs(x - a[j]) % k == 0){
                    break;
                }
                else
                    c++;
            }
            if(c == n-1){
                cout << "YES" << '\n' << i + 1 << '\n';
                flag = true;
                break;
            }
        }
        if(flag == false)
            cout << "NO" << '\n';
    }           
    return 0;
}