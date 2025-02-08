#include<bits/stdc++.h>
using namespace std;

int main(){
    int m, n;
    cin >> n >> m;
    vector<int> a(m);
    for(auto &it : a)
        cin >> it;
    
    int c = 0;
    vector<int> ans;
    for(int i = 1 ; i <= n ; ++i){
        auto it = find(a.begin(), a.end(), i);
        if(it == a.end()){
            c++;
            ans.push_back(i);
        }
    }

    cout << c << '\n';
    for(int i = 0 ; i < c ; ++i)
        cout << ans[i] << ' ';
}