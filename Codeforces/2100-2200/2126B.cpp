#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for(auto &it : a)
            cin >> it;

        int hikes = 0, c = 0;
        for(int i = 0 ; i < n ; ++i){
            if(a[i] == 1){
                hikes += (c + 1) / (k + 1);
                c = 0;
                continue;
            }
            else
                c++;
        }
        hikes += (c + 1) / (k + 1);
        cout << hikes << '\n';
    }
    return 0;
}