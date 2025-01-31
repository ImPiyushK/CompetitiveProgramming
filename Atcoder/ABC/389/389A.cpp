#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);

int main() {

    fastio

     string s;
     cin >> s;

     int a = s[0] - '0';
     int b = s[2] - '0';
    cout <<  a * b;

    return 0;
}