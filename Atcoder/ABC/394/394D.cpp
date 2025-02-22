#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

bool isColorfulBracketSequence(const string &S) {
    stack<char> stk;
    
    for (char ch : S) {
        if (ch == '(' || ch == '[' || ch == '<') {
            stk.push(ch);
        } else {
            if (stk.empty()) return false;
            
            char top = stk.top();
            if ((ch == ')' && top == '(') ||
                (ch == ']' && top == '[') ||
                (ch == '>' && top == '<')) {
                stk.pop();
            } else {
                return false;
            }
        }
    }
    
    return stk.empty();
}

void solve(){
    string S;
    cin >> S;
    
    if (isColorfulBracketSequence(S)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
    freopen("output.in", "w", stdout);
    #endif

    fastio
    
    solve();

    return 0;
}