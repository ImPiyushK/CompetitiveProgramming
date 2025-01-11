#include <bits/stdc++.h>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    string s;
    cin >> s;

    cout << s[0] << "UPC";
    //OR
    //cout << s.substr(0,1) ++ "UPC";
    
    return 0;
}