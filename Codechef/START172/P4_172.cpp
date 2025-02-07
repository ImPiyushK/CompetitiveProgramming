#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    while(T--){

        string a,b; 
        cin>>a>>b;

        if(b.size() > a.size()){
            cout << -1 << endl; 
            continue;
        }
        int ind = b.size() - 1;
        set<int>s;
        for(int i = a.size() - 1 ; i >= 0 ; i--){
            if(a[i] == b[ind]){
                ind--;
                s.insert(i);
                if(ind == -1) 
                    break;
            }
        }
        if(ind != -1) {
            cout << -1 << endl; 
            continue;
        }
        ll ans = 0;
        ll ct = 1;
        for(int i = 0 ; i < a.size() ; i++)
        {
            if(s.find(i) == s.end()){
                ans += ct;
            }
            else{
            ct++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}