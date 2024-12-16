#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> a(n);
        vector<int> freq(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            freq[a[i]]++;
        }
        queue<int> q;
        for (int i = 1; i <= n; i++)
        {
            if (freq[i] == 0)
            {
                q.push(i);
            }
        }
        vector<int> b(n);
        for (int i = 0; i < n; i++)
        {
            if (freq[a[i]])
            {
                b[i] = a[i];
                freq[a[i]] = 0;
            }
            else
            {
                b[i] = q.front();
                q.pop();
            }
        }

        for (int i = 0; i < n; i++) {
            cout << b[i] << ' ';
        }
        cout << '\n';

    }
    return 0;
}