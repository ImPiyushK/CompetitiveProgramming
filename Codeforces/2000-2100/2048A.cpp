#include <bits/stdc++.h>
using namespace std ;

void solve(){
    int x;
    cin >> x;

    while(x >= 33){
            string s = to_string(x);
            string news;
            news.push_back(s[0]);

            for (int i = 1; i < s.size(); ++i)
            {
                if(s[i] == '3' && news.back() == '3'){
                    news.pop_back();
                    continue;
                }
                news.push_back(s[i]);
            }
            if(news.empty()){
                x=0;
                break;
            }
            int newx = stoi(news);
            if(newx > 33){
                newx -= 33;
            }
            x=newx;
    }   

    if(x == 0)
        cout << "Yes" << '\n';
    else
        cout << "No" << '\n';

}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin >> t;
    while(t--){
        solve();        
    }
    return 0;
}