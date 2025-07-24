#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    string n;
    cin >> n;
    int sum = 0;
    int cnt_2 = 0, cnt_3 = 0;
    for (char c : n)
    {
        int digit = c - '0';
        sum += digit;
        if (digit == 2)
            cnt_2++;
        if (digit == 3)
            cnt_3++;
    }
 
    int required = (9 - (sum % 9)) % 9;
 
    if (required == 0)
    {
        cout << "YES\n";
        return;
    }
 
    bool isPossible = false;
    for (int k2 = 0; k2 <= min(cnt_2, 9); ++k2)
    {
        for (int k3 = 0; k3 <= min(cnt_3, 9); ++k3)
        {
            int x = (2 * k2 + 6 * k3) % 9;
            if (x == required)
            {
                isPossible = true;
                break;
            }
        }
        if (isPossible)
            break;
    }
 
    cout << (isPossible ? "YES\n" : "NO\n");
}
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}