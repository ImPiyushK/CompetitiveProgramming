#include <bits/stdc++.h>
using namespace std ;

        
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int a, b, c;
    cin >> a>> b>> c;

    if(a == b && b == c)
        cout << "Yes";
    else if(a+b == c || a+c == b || b+c == a)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}