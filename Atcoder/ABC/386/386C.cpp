#include <bits/stdc++.h>
using namespace std;

int main() {
    int k;
    cin >> k;
    string s, t;
    cin >> s >> t;

     if (s == t) {
        cout << "Yes" << endl;
        return 0;
    }
    int n = s.size();
    int m = t.size();
    if (abs(n - m) > 1) {
        cout << "No" << endl;
        return 0;
    }

    if (n == m) {
        // Check for one replacement
        int diffCount = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] != t[i]) {
                diffCount++;
                if (diffCount > 1) {
                    cout << "No" << endl;
                    return 0;
                }
            }
        }
        cout << (diffCount == 1 ? "Yes" : "No") << endl;
    } else {
        // Check for one insertion or deletion
        string longer = (n > m) ? s : t;
        string shorter = (n > m) ? t : s;

        int i = 0, j = 0;
        bool diff = false;
        while (i < longer.size() && j < shorter.size()) {
            if (longer[i] != shorter[j]) {
                if (diff) {
                    cout << "No" << endl;
                    return 0;
                }
                diff= true;
                i++;// Skip one character in the longer string
            } else {
                i++;
                j++;
            }
        }
        cout << "Yes" << endl;
    }
    return 0;
}
